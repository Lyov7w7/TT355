#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    if (IsDebuggerPresent()) {
        cout << "Debugger detected!" << endl;
        return 1;
    }

    cout << "No debugger detected. Program is running normally." << endl;
    return 0;
}