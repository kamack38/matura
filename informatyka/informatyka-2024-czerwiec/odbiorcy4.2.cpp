#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream input("dane/odbiorcy.txt");
    ofstream output("wyniki/wynik4.2.txt");
    bitset<1024> bit;
    int num;
    while (input >> num) {
        bit.set(num, 1);
    }
    output << bit.size() - bit.count();
    return 0;
}
