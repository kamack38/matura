#include <bits/stdc++.h>

using namespace std;

array<int, 1025> send;
array<int, 1025> pak;

int main() {
    ifstream input("dane/odbiorcy.txt");
    ofstream output("wyniki/wynik4.4.txt");
    int num;
    int i = 1;
    while (input >> num) {
        send[i] = num;
        ++i;
    }
    int max_r = 0;
    for (int i = 1; i < 9; ++i) {
        int round = 1;
        int dest = send[i];
        while (dest != i && round <= 1025) {
            dest = send[dest];
            ++round;
        };
    }
    return 0;
}
