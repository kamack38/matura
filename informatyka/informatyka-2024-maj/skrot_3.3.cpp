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
    ofstream output("wyniki/wynik_3.3.txt");

    int line;
    while (file >> line) {
        int sk = skrot(line);
        if (__gcd(sk, line) == 7) {
            cout << line << '\n';
            output << line << '\n';
        }
    }
    file.close();
}
