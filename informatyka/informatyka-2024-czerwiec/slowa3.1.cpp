#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream input("dane/slowa.txt");
    ofstream output("wyniki/wynik3.1.txt");
    string str;
    int cnt = 0;
    while (input >> str) {
        int i = str.find('k');
        while (i != string::npos) {
            if (i + 2 >= str.length()) break;
            if (str.at(i + 2) == 't') {
                cnt++;
                break;
            }
            i = str.find('k', i + 1);
        }
    }
    cout << cnt;
    output << cnt;
    return 0;
}
