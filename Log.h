/*
BRENDON LINTHURST
CPSC 323 PROJ 1
09-13-2019
*/

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

class Log {
    public:
        int openFile(fstream& file, string file_name)
        {
            file.open(file_name, fstream::in | fstream::app);
            if(!file.is_open())
            {
                cout << "Failed to create log file!";
                system("exit");
            }
        }

        void closeFile(fstream& file)
        {
            file.close();
        }

        void writeToFile(fstream& file, string message, string function, int line, int type = 0)
        {
            if(file.is_open())
            {
                file << alertType(type) << " | " << "DATE: " << __DATE__ << " | " << "LINE NUMBER: " << line << " | " << "FUNCTION: " << function << " | " << "DESCRIPTION: " << message << endl;
            }
        }


        void flushLastWrite(fstream& file)
        {
            file.flush();
        }
        
        void readLog(fstream& file)
        {
            file.seekg(0);
            if(!file.is_open())
            {
                cout << "Error: file is closed" << endl;
                return;
            }
            string line;
            while(getline(file, line))
            {
                cout << line << endl;
            }
        }
    
        string alertType(int level)
        {
            switch (level)
            { 
                case 1:
                    return "Warning";
                case 2:
                    return "Error";
                case 3:
                    return "Critical";
                case 4:
                    return "Fatal";
            }
            return "Success";
        }
};