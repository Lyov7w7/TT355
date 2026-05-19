#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int a = 10;
    int b = 5;
    int result;

    int variant = rand() % 3;

    if (variant == 0) {
        result = a + b;
        cout << "Variant 1 executed\n";
    }
    else if (variant == 1) {
        result = (a ^ b) + 2 * (a & b);
        cout << "Variant 2 executed\n";
    }
    else {
        result = b + a;
        cout << "Variant 3 executed\n";
    }

    cout << "Result = " << result << endl;
    return 0;
}