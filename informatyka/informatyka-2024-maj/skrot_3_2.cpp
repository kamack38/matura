#include <bits/stdc++.h>

using namespace std;

int skrot(int n) {
    int b = 1, m = 0;
    while (n > 0) {
        int a = n % 10;
        n = n / 10;
        if (a & 1 != 0) {
            m = m + b * a;
            b = b * 10;
        }
    }
    return m;
}

int main() {
    std::ifstream file("skrot.txt");
    ofstream output("wyniki3_2.txt");
    int a;
    // cin >> a;
    int line, maxi = 0, num = 0;
    while (file >> line) {
        int sk = skrot(line);
        if (sk == 0) {
            maxi = max(maxi, line);
            num++;
        }
    }
    output << num << '\n' << maxi;
    // cout << skrot(a);
    file.close();
}
