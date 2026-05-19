#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;

    cout << "Enter password: ";
    cin >> password;

    if (password == "secret123") {
        cout << "Access granted!" << endl;
    } else {
        cout << "Access denied!" << endl;
    }

    return 0;
}