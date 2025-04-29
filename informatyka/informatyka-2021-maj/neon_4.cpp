#include <bits/stdc++.h>

using namespace std;

array<int, 27> cnt;

const int lines = 2000;
const char zero_char = 'A';

int main() {
    fstream ins, ans;
    string str, wyn;
    char c;
    pair<int, string> mxx = {0, ""}, last_op = {0, ""};
    ins.open("dane/instrukcje.txt", ios::in);
    while (ins >> str >> c) {
        if (last_op.second != str) {
            last_op = {1, str};
        } else {
            last_op.first++;
        }
        mxx = max(mxx, last_op);
        switch (str[0]) {
            case 'D':
                // Dopisz
                wyn.push_back(c);
                cnt[c - zero_char]++;
                break;
            case 'Z':
                // Zmień
                wyn.back() = c;
                break;
            case 'U':
                // Usuń
                wyn.pop_back();
                break;
            case 'P':
                // Przesuń
                char new_char = char((c - zero_char + 1) % 26 + zero_char);
                for (auto& i : wyn) {
                    if (i == c) {
                        i = new_char;
                        break;
                    }
                }
                break;
        }
    }
    ins.close();
    // 4.1
    ans.open("wyniki4.txt", ios::out);
    ans << "4.1 " << wyn.length() << '\n';

    // 4.2
    ans << "4.2 " << mxx.second << ' ' << mxx.first << '\n';

    // 4.3
    pair<int, char> maxi = {0, zero_char};
    for (int i = 0; i < 26; ++i) {
        maxi = max(maxi, {cnt[i], char(i + zero_char)});
    }
    ans << "4.3 " << maxi.second << ' ' << maxi.first << '\n';

    // 4.4
    ans << "4.4 " << wyn << '\n';
    ans.close();
}
