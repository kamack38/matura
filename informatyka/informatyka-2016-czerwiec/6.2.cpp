#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("dane\\liczby.txt");
    ofstream out("wyniki_6_2.txt");
    // stringstream ss(in);
    string str;
    int cnt = 0;
    while (in >> str) {
        if (str.back() == '4') {
            if (str.find("0") == string::npos) {
                cnt++;
            };
        }
    }
    cout << cnt;
    out << cnt;
    in.close();
    return 0;
}
