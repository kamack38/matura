#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream input("dane/slowa.txt");
    ofstream output("wyniki/wynik3.3.txt");
    string str;
    while (input >> str) {
        char cl, bl = '0';
        int mn = 0, cn = 1;
        for (auto i : str) {
            if (i == cl) {
                cn++;
            } else {
                cl = i;
                cn = 1;
            }
            if (cn >= mn) {
                bl = cl;
                mn = cn;
            }
        }
        cn = 0;
        for (auto i : str) {
            if (i == bl) {
                cn++;
            }
        }
        if (2 * cn >= str.length()) {
            output << str << '\n';
        }
    }
    return 0;
}
