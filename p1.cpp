#include <iostream>
#include "Log.h"
using namespace std;

int main() {
    fstream file("log.txt", fstream::app);
    Log L;
    L.openFile(file);
    L.writeToFile(file, "hey dude");
    return 0;
}