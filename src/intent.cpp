#include <iostream>
#include <vector>
#include <regex>
#include "intent.h"
using namespace std;

//Knuth–Morris–Pratt algorithm to find the string matching
vector<int> KMP(string S, string K)
{
    vector<int> T(K.size() + 1, -1);
    vector<int> matches;

    if(K.size() == 0)
    {
        matches.push_back(0);
        return matches;
    }
for(int i = 1; i <= K.size(); i++)
{
    int pos = T[i - 1];
    while(pos != -1 && K[pos] != K[i - 1]) pos = T[pos];
    T[i] = pos + 1;
}

int sp = 0;
int kp = 0;
while(sp < S.size())
{
    while(kp != -1 && (kp == K.size() || K[kp] != S[sp])) kp = T[kp];
    kp++;
    sp++;
    if(kp == K.size()) matches.push_back(sp - K.size());
}

return matches;

}

string intent::recognizer(string s) {
    

    std::regex rx(R"([0-9])"); // regular expression is used to find out the numbers in a string
    std::smatch o;
    std::string str = s;
    if (regex_search(str, o, rx))
    {

       return "calender";
    }
    else{

   vector<int> returnValue = KMP(s, "weather like in");  // KMP match will return the index of the resulting string
   if(returnValue.size()!=0)
   {
      return "weather city";
   }
   else{

      vector<int> returnValue = KMP(s, "weather");
      if(returnValue.size()!=0)
      {
         return "weather";
      }

      else{

         vector<int> returnValue = KMP(s, "fact");
           if(returnValue.size()!=0){

            return "fact";
            }
           else{ return "not found";} 

            
        }
      }

   }
}





