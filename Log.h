#include <fstream>
#include <iostream>
#include <string>
using namespace std;

class Log {
    public:
        void openFile(fstream& file)
        {
            if(file.is_open())
            {
                cout << "File opened successfully" << endl;
            }
        }

        void closeFile(fstream& file)
        {
            if(file.is_open())
            {
                file.close();
                cout << "File closed successfully" << endl;
            }
        }

        void writeToFile(fstream& file, string message)
        {
            if(file.is_open()){
                file << message << endl;
                file.close();
            }
        }

    private:
        string file_name = "default";
};