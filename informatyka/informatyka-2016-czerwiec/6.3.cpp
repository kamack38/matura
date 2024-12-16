#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("dane\\liczby.txt");
    ofstream out("wyniki_6_3.txt");
    // stringstream ss(in);
    string str;
    int cnt = 0;
    while (in >> str) {
        if (str.back() == '2') {
            if (str[str.length() - 2] == '0') {
                cnt++;
            };
        }
    }
    cout << cnt;
    out << cnt;
    in.close();
    return 0;
}
