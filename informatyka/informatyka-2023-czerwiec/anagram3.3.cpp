#include "bits/stdc++.h"

using namespace std;

vector<int> vec;

int main() {
    // ifstream in("dane/przyklad.txt");
    ifstream in("dane/anagram.txt");
    string str;
    int maxdiff = 0;
    while (in >> str) {
        int n = stoi(str, nullptr, 2);
        vec.push_back(n);
    }
    for (int i = 0; i < vec.size() - 1; ++i) {
        maxdiff = max(maxdiff, abs(vec[i] - vec[i + 1]));
    }
    cout << bitset<16>(maxdiff).to_string();
}
