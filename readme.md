(Embedded Intent Recognizer)
The project is built for simple intent recognization from the terminal
Intent_Recognizer_run runnable can be executed via command line. test cases be executed from Intent_Recognizer_tst


Google test frame work has been choosen from submodule https://github.com/google/googletest/
after cloning the repository do the following commands to update the submodule

git submodule init

git submodule update

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

