#include <bits/stdc++.h>

#include <limits>

using namespace std;

array<int, 100> counts;

int main() {
    // ifstream input("dane/pi_przyklad.txt");
    ifstream input("dane/pi.txt");
    int x, prev = 0, cnt = 0;
    while (input >> x) {
        int n = x + prev * 10;
        prev = x;
        counts[n]++;
    }
    int maxi = 0, maxi_cnt = 0, mini = numeric_limits<int>::max(),
        mini_cnt = numeric_limits<int>::max();
    for (int i = 0; i < 100; ++i) {
        if (counts[i] > maxi_cnt) {
            maxi = i;
            maxi_cnt = counts[i];
        }
        if (counts[i] < mini_cnt) {
            mini = i;
            mini_cnt = counts[i];
        }
    }
    cout << mini << ' ' << mini_cnt << '\n';
    cout << maxi << ' ' << maxi_cnt << '\n';
    return 0;
}
