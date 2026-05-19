#include <iostream>
#include <string>
using namespace std;

bool check(string input) {
    int key[] = {52, 49, 56, 60, 59}; // password: admin

    if (input.length() != 5)
        return false;

    for (int i = 0; i < 5; i++) {
        if ((input[i] ^ 0x55) != key[i])
            return false;
    }

    return true;
}

int main() {
    string pass;

    cout << "Enter password: ";
    cin >> pass;

    if (check(pass)) {
        cout << "Access Granted!" << endl;
    } else {
        cout << "Access Denied!" << endl;
    }

    return 0;
}