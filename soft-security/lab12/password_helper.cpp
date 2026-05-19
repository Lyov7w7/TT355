#include <iostream>
using namespace std;

int main() {
    int key[] = {52, 49, 56, 60, 59};

    cout << "Recovered password: ";

    for (int i = 0; i < 5; i++) {
        char c = key[i] ^ 0x55;
        cout << c;
    }

    cout << endl;
    return 0;
}