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
    std::ifstream file("skrot2.txt");
    ofstream output("wyniki3_3.txt");
    int a;
    int line;
    while (file >> line) {
        int sk = skrot(line);
        if (__gcd(sk, line) == 7) {
            output << line << '\n';
        }
    }
    file.close();
}
