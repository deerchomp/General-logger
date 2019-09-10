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
                file << "DATE: " << __DATE__ << '|' << "LINE: " <<
                    __LINE__ << '|' << "FUNC: " << __func__ <<
                    '|' << "FILE: " << __FILE__ << endl;
                file << message << endl;
            }
        }

        void flushLastWrite(fstream& file)
        {
            file.flush();
        }

        string assignType(int level)
        {
            switch (level)
            {
                case 0:
                    return "warning";
                case 1:
                    return "error";
            }
            return "null";
        }

    private:
        string file_name = "default";
};