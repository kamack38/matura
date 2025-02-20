#include <bits/stdc++.h>

using namespace std;

int main() {
    // ifstream input("dane/bin_przyklad.txt");
    ifstream input("dane/bin.txt");
    string str;
    int max_n = 0;
    while (input >> str) {
        int n = stoi(str, nullptr, 2);
        max_n = max(max_n, n);
    }
    bitset<32> bit = max_n;
    string output = bit.to_string();
    output.erase(0, output.find_first_not_of('0'));
    cout << output;
    return 0;
}
