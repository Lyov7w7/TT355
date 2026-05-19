#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
using namespace std;

void xor_decrypt(vector<char>& data, char key) {
    for (auto& b : data) {
        b ^= key;
    }
}

int main() {
    ifstream file("packed.bin", ios::binary);

    if (!file) {
        cout << "packed.bin not found!" << endl;
        return 1;
    }

    vector<char> data((istreambuf_iterator<char>(file)),
                       istreambuf_iterator<char>());

    xor_decrypt(data, 0xAA);

    ofstream out("unpacked.exe", ios::binary);
    out.write(data.data(), data.size());
    out.close();

    cout << "Unpacked successfully!" << endl;
    system("unpacked.exe");

    return 0;
}