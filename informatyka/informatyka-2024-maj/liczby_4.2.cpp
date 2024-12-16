#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream file("dane/liczby.txt");
    ofstream output("wyniki/wynik_4.2.txt");

    vector<int> w1, w2;
    string l1, l2;
    getline(file, l1);
    stringstream s1(l1);
    int num = 0;
    while (s1 >> num) {
        w1.push_back(num);
    }
    sort(w1.rbegin(), w1.rend());

    cout << w1[100];
    output << w1[100];
    file.close();
}
