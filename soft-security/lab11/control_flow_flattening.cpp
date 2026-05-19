#include <iostream>
using namespace std;

int hidden_logic(int a, int b) {
    int state = 0;
    int result = 0;

    while (true) {
        switch (state) {
            case 0:
                result = a + b;
                state = 1;
                break;

            case 1:
                result = result * 2;
                state = 2;
                break;

            case 2:
                return result;
        }
    }
}

int main() {
    cout << hidden_logic(5, 3) << endl;
    return 0;
}