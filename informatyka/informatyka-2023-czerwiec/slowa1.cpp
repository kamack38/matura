#include <bits/stdc++.h>

using namespace std;

string czy_mniejszy(int n, string s, int k1, int k2) {
    int i = k1, j = k2;
    while (i <= n and j <= n) {
        if (s[i] == s[j]) {
            i++;
            j++;
        } else {
            if (s[i] < s[j]) {
                return "TAK";
            }
            return "NIE";
        }
    }
    if (j <= n) return "TAK";
    return "NIE";
}

int main() {
    ifstream in1("dane/slowa1.txt");
    ifstream in2("dane/slowa2.txt");
    ifstream in3("dane/slowa3.txt");
    // ifstream in1("dane/sufiks_1.txt");
    // ifstream in2("dane/sufiks_2.txt");
    string str;
    int n, k1, k2;
    while (in1 >> n >> str >> k1 >> k2) {
        str.insert(0, 1, 'a');
        cout << czy_mniejszy(n, str, k1, k2) << '\n';
    }
    while (in2 >> n >> str >> k1 >> k2) {
        str.insert(0, 1, 'a');
        cout << czy_mniejszy(n, str, k1, k2) << '\n';
    }
    while (in3 >> n >> str >> k1 >> k2) {
        str.insert(0, 1, 'a');
        cout << czy_mniejszy(n, str, k1, k2) << '\n';
    }
    return 0;
}
