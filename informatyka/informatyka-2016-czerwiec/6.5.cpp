#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("dane\\liczby.txt");
    ofstream out("wyniki_6_5.txt");
    // stringstream ss(in);
    string str;
    long long cnt = 0, num;
    string zmin, zmax;
    long long lmin = INT_MAX, lmax = 0;
    pair<int, string> mini = {INT_MAX, ""}, maxi = {0, ""};
    while (in >> str) {
        num = stoi(str.substr(0, str.length() - 1), nullptr, str.back() - '0');
        mini = min(mini, {num, str});
        maxi = max(maxi, {num, str});
    }
    cout << "Najmniejsza: " << mini.second << ' ' << mini.first << '\n';
    cout << "Najwieksza: " << maxi.second << ' ' << maxi.first;
    out << "Najmniejsza: " << mini.second << ",kod: " << mini.first << '\n';
    out << "Najwieksza: " << maxi.second << ",kod: " << maxi.first;
    in.close();
    return 0;
}
