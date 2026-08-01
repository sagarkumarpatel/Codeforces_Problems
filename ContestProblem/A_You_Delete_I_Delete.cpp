// File: A_You_Delete_I_Delete.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    string s;
    cin >> s;

    int n = s.size();

    // Alice deletes '0'
    int del0 = -1;

    // Delete the first '0' followed by '1'
    for (int i = 0; i + 1 < n; i++) {
        if (s[i] == '0' && s[i + 1] == '1') {
            del0 = i;
            break;
        }
    }

    // Otherwise delete last '0'
    if (del0 == -1) {
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '0') {
                del0 = i;
                break;
            }
        }
    }

    s.erase(s.begin() + del0);

    // Bob deletes a '1'
    n = s.size();
    int del1 = -1;

    // Delete the first '1' followed by '0'
    for (int i = 0; i + 1 < n; i++) {
        if (s[i] == '1' && s[i + 1] == '0') {
            del1 = i;
            break;
        }
    }

    // Otherwise delete the last '1'
    if (del1 == -1) {
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '1') {
                del1 = i;
                break;
            }
        }
    }

    s.erase(s.begin() + del1);

    cout << s << '\n';
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) //test case
        solve();

    return 0;
}