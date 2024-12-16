#include <bits/stdc++.h>

using namespace std;

int most_freq(ifstream& file) {
    int num, max_count = 0, most_frequent_element = 0;
    unordered_map<int, uint> map;
    while (file >> num) {
        map[num]++;
    }

    for (auto& pair : map) {
        if (pair.second > max_count) {
            max_count = pair.second;
            most_frequent_element = pair.first;
        }
    }
    return most_frequent_element;
}

int main() {
    ifstream input1("dane/dane5-1.txt");
    ifstream input2("dane/dane5-2.txt");
    ifstream input3("dane/dane5-3.txt");

    cout << most_freq(input1) << '\n';
    cout << most_freq(input2) << '\n';
    cout << most_freq(input3) << '\n';
    return 0;
}
