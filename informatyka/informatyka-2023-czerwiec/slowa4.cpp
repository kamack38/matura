#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("dane/slowa4.txt");
    // ifstream in("dane/sufiks_4.txt");
    string str;
    int n;
    while (in >> n >> str) {
        vector<string> suf;
        for (int i = 0; i < str.length(); ++i) {
            suf.push_back(str.substr(i, n - i));
            // cout << str.substr(i, n - i) << ' ';
        }
        sort(suf.begin(), suf.end());
        // for (auto s : suf) {
        //     cout << s << ' ';
        // }
        // cout << '\n';
        cout << suf[0] << '\n';
    }

    return 0;
}
