#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("dane\\liczby.txt");
    ofstream out("wyniki_6_4.txt");
    // stringstream ss(in);
    string str;
    long long cnt = 0, num;
    // cout << stoi("111", nullptr, 8);
    while (in >> str) {
        if (str.back() == '8') {
            num = stoi(str.substr(0, str.length() - 1), nullptr, str.back() - '0');
            cout << str << ' ' << num << '\n';
            cnt += num;
        }
    }
    cout << cnt;
    out << cnt;
    in.close();
    return 0;
}
