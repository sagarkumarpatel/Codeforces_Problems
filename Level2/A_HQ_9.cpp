// File: A_HQ_9.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    string p;
    cin >> p;

    for (char c : p) {
        if (c == 'H' || c == 'Q' || c == '9') {
            cout << "YES\n";
            return ;
        }
    }

    cout << "NO\n";
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // int t; cin >> t; while (t--)
    solve();
    return 0;
}