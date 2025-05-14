#include <string>

#include "bits/stdc++.h"

using namespace std;

vector<int> vec;

int main() {
    // ifstream in("dane/przyklad.txt");
    ifstream in("dane/anagram.txt");
    string str, num;
    int max_sum = 0, without_zero = 0, max_num;
    while (in >> str) {
        set<int> s;
        int n = stoi(str, nullptr, 2);
        num = to_string(n);
        bool has_zero = false;
        for (auto i : num) {
            if (i == '0') {
                has_zero = true;
            }
            s.insert(i - '0');
        }
        if (!has_zero) {
            without_zero++;
        }
        int sum = 0;
        for (auto i : s) {
            sum += i;
        }
        if (sum > max_sum) {
            max_num = n;
            max_sum = sum;
        }
        s.clear();
    }
    cout << without_zero << ' ' << max_num << '\n';
}
