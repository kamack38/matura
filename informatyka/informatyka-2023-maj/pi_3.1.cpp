#include <bits/stdc++.h>

using namespace std;

int main() {
    // ifstream input("dane/pi_przyklad.txt");
    ifstream input("dane/pi.txt");
    int x, prev = 0, cnt = 0;
    while (input >> x) {
        int n = x + prev * 10;
        prev = x;
        if (n > 90) cnt++;
    }
    cout << cnt;
    return 0;
}
