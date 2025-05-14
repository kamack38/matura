#include <bits/stdc++.h>

using namespace std;

string czy_mniejszy(int n, string s, int k1, int k2) {
    int i = k1, j = k2;
    while (i <= n and j <= n) {
        if (s[i] == s[j]) {
            i++;
            j++;
        } else {
            if (s[i] < s[j]) {
                return "PRAWDA";
            }
            return "FALSZ";
        }
    }
    if (j <= n) return "PRAWDA";
    return "FALSZ";
}

array<int, 100> T;

string s;
int n;

// void quicksort(int left, int right) {
//     if (left >= right) return;
//     int mid = T[(left + right) / 2], i = left, j = right;
//     while (1) {
//         while (czy_mniejszy(n, s, T[left], T[right]) ==
//         if (czy_mniejszy(n, s, T[left], T[right]) == "PRAWDA")
//     }
//     quicksort(i, mid);
//     quicksort(mid, j);
// }

int main() {
    cin >> s;
    n = s.length();
    s.insert(0, 1, 'a');
    // CODE START
    for (int i = 1; i < 100; ++i) {
        T[i] = i;
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = i + 1; j <= n; ++j) {
            if (czy_mniejszy(n, s, T[i], T[j]) == "FALSZ") {
                int x = T[i];
                T[i] = T[j];
                T[j] = x;
            }
        }
    }
    // CODE END
    for (int i = 1; i <= n; ++i) {
        cout << T[i] << ' ';
    }
}
