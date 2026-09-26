#include <bits/stdc++.h>
using namespace std;

void funSag() {
    int sz;
    char ch;
    cin >> sz >> ch;

    string s;
    cin >> s;

    int finalOutpt = 0;

    for (int i = 0; i < sz / 2; i++) {
        int j = sz - 1 - i;

        if (s[i] != s[j]) {
            if (s[i] == ch || s[j] == ch) {
                finalOutpt++;
            } else {
                finalOutpt += 2;
            }
        }
    }

    cout << finalOutpt << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testcases;
    cin >> testcases;

    while (testcases--) {
        funSag();
    }
    return 0;
}