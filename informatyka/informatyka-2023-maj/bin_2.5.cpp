#include <bits/stdc++.h>

using namespace std;

int main() {
    // ifstream input("dane/bin_przyklad.txt");
    ifstream input("dane/bin.txt");
    ofstream output("wyniki2_5.txt");
    string str;
    while (input >> str) {
        int n = stoi(str, nullptr, 2);
        bitset<32> bit = n ^ (n / 2);
        str = bit.to_string();
        str.erase(0, str.find_first_not_of('0'));
        output << str << '\n';
    }
    return 0;
}
