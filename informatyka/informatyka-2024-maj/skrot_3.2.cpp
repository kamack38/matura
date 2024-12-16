#include <bits/stdc++.h>

using namespace std;

int skrot(int n) {
    int b = 1, m = 0;
    while (n > 0) {
        int a = n % 10;
        n = n / 10;
        if ((a & 1) != 0) {
            m = m + b * a;
            b = b * 10;
        }
    }
    return m;
}

int main() {
    ifstream file("dane/skrot.txt");
    ofstream output("wyniki/wynik_3.2.txt");

    int line, maxi = 0, num = 0;
    while (file >> line) {
        int sk = skrot(line);
        if (sk == 0) {
            maxi = max(maxi, line);
            num++;
        }
    }
    cout << num << '\n' << maxi;
    output << num << '\n' << maxi;
    file.close();
}
