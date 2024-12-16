#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream file("liczby.txt");
    vector<int> w1, w2;
    string l1, l2;
    getline(file, l1);
    getline(file, l2);
    stringstream s1(l1), s2(l2);
    int num = 0;
    while (s1 >> num) {
        w1.push_back(num);
    }
    while (s2 >> num) {
        w2.push_back(num);
    }
    int cnt = 0;
    for (int x : w2) {
        for (int &y : w1) {
            if (x % y == 0) {
                ++cnt;
                y = INT_MAX;
            }
        }
    }
    cout << cnt;
    file.close();
}
