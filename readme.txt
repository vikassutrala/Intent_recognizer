(Embedded Intent Recognizer)

The proect is built for simple intent recognization from the terminal

it can be executed both via command line and the testcases 

Google test frame work has been choosen for the proect from https://github.com/google/googletest/

Pre requisits: 

 cmake version 3.0 or above
 CMAKE_CXX_STANDARD 17
 
build the project :

cd build

cmake .. -DCMAKE_BUILD_TYPE=Debug -G "Unix Makefiles" 

make all

find the executables: 

find . -executable -type f

Run the command line tool:


./src/Intent_Recognizer_run

Run the testcases via:

./tst/Intent_Recognizer_tst












 
 
 
 


