// File: A_Threshold_Movement.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    char c;
    cin >> n >> c;

    string s;
    cin >> s;

    if (c == 'g') {
        cout << 0 << "\n";
        return;
    }

    s += s;

    int maxWait = 0;
    int lastGreen = -1;

    for (int i = 2 * n - 1; i >= 0; i--) {
        if (s[i] == 'g') {
            lastGreen = i;
        }

        if (i < n && s[i] == c && lastGreen != -1) {
            maxWait = max(maxWait, lastGreen - i);
        }
    }

    cout << maxWait << "\n";
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}