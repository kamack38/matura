#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream file("dane/liczby.txt");
    ofstream output("wyniki/wynik_4.4.txt");

    vector<int> w1, w2;
    string l1, l2;
    getline(file, l1);
    stringstream s1(l1);
    int num = 0;
    w1.push_back(0);
    s1 >> num;
    w1.push_back(num);
    while (s1 >> num) {
        w1.push_back(w1.back() + num);
    }

    long double max_avg = 0.0, avg = 0.0, max_len = 0, sum = 0.0;
    // int len = 1;
    for (int len = 50; len < w1.size(); ++len) {
        for (int i = 1; i + len <= w1.size(); ++i) {
            sum = w1[i + len - 1] - w1[i - 1];
            avg = sum / len;
            if (avg > max_avg) {
                max_avg = avg;
                max_len = len;
                num = w1[i] - w1[i - 1];
            }
        }
    }
    cout << setprecision(10) << max_avg << ' ' << max_len << ' ' << num;
    output << setprecision(10) << max_avg << ' ' << max_len << ' ' << num;
    file.close();
}
