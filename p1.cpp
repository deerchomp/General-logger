/*
BRENDON LINTHURST
CPSC 323 PROJ 1
09-13-2019
*/

//This program tests the Log class methods

#include <iostream>
#include <string>
#include "Log.h"
using namespace std;

int main() {
    string log_file = "log.txt";
    fstream file(log_file);
    Log *L = new Log();


    //Open log
    cout << "Testing opening log file...." << endl;
    L->openFile(file, log_file);

    //Writing log with required output lines
    cout << "Testing write to log..." << endl;
    L->writeToFile(file, "no problems here", __func__, __LINE__);
    L->writeToFile(file, "minor problem here!", __func__, __LINE__, 1);
    L->writeToFile(file, "big problem", __func__, __LINE__,2);
    L->writeToFile(file, "bigger problem", __func__, __LINE__,3);
    L->writeToFile(file, "RIP", __func__, __LINE__,4);

    //Reading log
    cout << "Testing reading log file..." << endl;
    L->readLog(file);

    //Closing log
    cout << "Testing closing log file...." << endl;
    L->closeFile(file);

    
    return 0;
}