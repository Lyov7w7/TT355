#include <iostream>
using namespace std;

enum OpCode {       
    PUSH = 1,
    ADD = 2,
    PRINT = 3,
    HALT = 4
};

int main() {
    int bytecode[] = {
        PUSH, 5,
        PUSH, 3,
        ADD,
        PRINT,
        HALT
    };

    int stack[10];
    int sp = 0;
    int ip = 0;

    while (true) {
        int op = bytecode[ip++];

        if (op == PUSH) {
            stack[sp++] = bytecode[ip++];
        }
        else if (op == ADD) {
            int b = stack[--sp];
            int a = stack[--sp];
            stack[sp++] = a + b;
        }
        else if (op == PRINT) {
            cout << stack[sp - 1] << endl;
        }
        else if (op == HALT) {
            break;
        }
    }

    return 0;
}