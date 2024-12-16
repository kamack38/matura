#include <bits/stdc++.h>

using namespace std;

char rot13(char c) { return ((c - 'a') + 13) % 26 + 'a'; }

string longest = "";

bool is_good(string str) {
    for (int i = 0; i < str.length(); ++i) {
        if (rot13(str[i]) != str[str.length() - 1 - i]) {
            return false;
        }
    }
    if (str.length() > longest.length()) {
        longest = str;
    }
    return true;
}

int main() {
    ifstream input("dane/slowa.txt");
    ofstream output("wyniki/wynik3.2.txt");
    string str;
    int cnt = 0;
    while (input >> str) {
        int len = str.length();
        if (is_good(str)) {
            cnt++;
        }
    }
    cout << cnt << '\n' << longest;
    output << cnt << '\n';
    output << longest;
    return 0;
}
