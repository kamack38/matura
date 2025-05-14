#include "bits/stdc++.h"

using namespace std;

// (7 3) == (7 4)

int main() {
    // ifstream in("dane/przyklad.txt");
    ifstream in("dane/anagram.txt");
    string str;
    int maxdiff = 0;
    while (in >> str) {
        if (str.length() != 8) {
            continue;
        }
        // int n = stoi(str, nullptr, 2);
        int one = 0, zero = 0;
        for (auto i : str) {
            if (i == '1') {
                one++;
            } else {
                zero++;
            }
        }
        one--;
        if (one == 3 || one == 4) {
            cout << str << '\n';
        }
    }
}
