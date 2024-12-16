#include <bits/stdc++.h>

using namespace std;

array<int, 1025> send;

int main() {
    ifstream input("dane/odbiorcy.txt");
    ofstream output("wyniki/wynik4.3.txt");
    int num;
    int i = 1;
    while (input >> num) {
        send[i] = num;
        ++i;
    }
    pair<int, int> mini = {INT_MAX, INT_MAX};
    for (int i = 1; i < 1025; ++i) {
        int round = 1;
        int dest = send[i];
        while (dest != i && round <= 1025) {
            dest = send[dest];
            ++round;
        };
        mini = min(mini, {round, i});
    }
    output << mini.first << ' ' << mini.second;
    return 0;
}
