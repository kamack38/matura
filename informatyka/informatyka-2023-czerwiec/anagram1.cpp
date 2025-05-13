#include "bits/stdc++.h"

using namespace std;

int main() {
    // ifstream in("dane/przyklad.txt");
    ifstream in("dane/anagram.txt");
    string str;
    int eq = 0, aleq = 0;
    while (in >> str) {
        // int n = stoi(str, nullptr, 2);
        int one = 0, zero = 0;
        for (auto i : str) {
            if (i == '1') {
                one++;
            } else {
                zero++;
            }
        }
        if (one == zero) {
            eq++;
        } else if (abs(one - zero) == 1) {
            aleq++;
        }
    }
    cout << eq << '\n' << aleq;
}
