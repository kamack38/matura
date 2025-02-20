#include <bits/stdc++.h>

using namespace std;

int main() {
    // ifstream input("dane/bin_przyklad.txt");
    ifstream input("dane/bin.txt");
    string str;
    int count = 0;
    while (input >> str) {
        int n = stoi(str, nullptr, 2), blocks = 0;
        if ((n & 1) ^ ((n >> 1) & 1)) {
            ++blocks;
        }
        while (n >>= 1) {
            if ((n & 1) ^ ((n >> 1) & 1)) {
                ++blocks;
            }
        }
        if (blocks <= 2) {
            ++count;
        }
    }
    cout << count;
    return 0;
}
