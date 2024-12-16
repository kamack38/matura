#include <bits/stdc++.h>

using namespace std;

int max_arr_sum(ifstream& file) {
    int a, sum = 0, max_sum = 0;
    while (file >> a) {
        sum = max(0, sum + a);
        max_sum = max(max_sum, sum);
    }
    return max_sum;
}

int main() {
    ifstream input1("dane/dane5-1.txt");
    ifstream input2("dane/dane5-2.txt");
    ifstream input3("dane/dane5-3.txt");

    cout << max_arr_sum(input1) << '\n';
    cout << max_arr_sum(input2) << '\n';
    cout << max_arr_sum(input3) << '\n';
    return 0;
}
