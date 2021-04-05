#include <iostream>
#include <vector>
#include <regex>
#include "intent.h"
using namespace std;

int main() {

    string s ;
    cout<<"Please Enter a question\n";
    getline(cin,s);
    intent i ;
    cout <<"Intent: Get"<<i.recognizer(s)<< endl;
    
    return 0;
  
}

