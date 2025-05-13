#include <bits/stdc++.h>

using namespace std;

int l_add = 0;

array<array<int, 5>, 100> res;

int iloczyn(int x, int y, int wyw) {
    ++wyw;
    res[wyw][0] = x;
    res[wyw][1] = y;
    res[wyw][4] = x;
    if (y == 1) return x;
    int k = y / 2;
    res[wyw][2] = k;
    int z = iloczyn(x, k, wyw);
    res[wyw][3] = z;
    if (y % 2 == 0) {
        ++l_add;
        res[wyw][4] = z + z;
        return z + z;
    }
    l_add += 2;
    res[wyw][4] = x + z + z;
    return x + z + z;
}

int main() {
    int x, y;
    cin >> x >> y;
    int wyn = iloczyn(x, y, 0);
    cout << "wynik: " << wyn;
    cout << ", liczba dodawan: " << l_add << '\n';
    for (int i = 1; res[i][1] != 0; ++i) {
        cout << "wyw: " << i;
        cout << ", x: " << res[i][0];
        cout << ", y: " << res[i][1];
        cout << ", k: " << res[i][2];
        cout << ", z: " << res[i][3];
        cout << ", wynik: " << res[i][4] << '\n';
    }
}
