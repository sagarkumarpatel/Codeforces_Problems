// File: B_Merge_to_Match.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, q;
    cin >> n >> q;

    string s, t;
    cin >> s >> t;

    vector<int> pref00(n + 1, 0);
    vector<int> pref11(n + 1, 0);
    vector<int> pref01(n + 1, 0);
    vector<int> pref10(n + 1, 0);

    for (int i = 0; i < n; i++) {
        pref00[i + 1] = pref00[i];
        pref11[i + 1] = pref11[i];
        pref01[i + 1] = pref01[i];
        pref10[i + 1] = pref10[i];

        if (s[i] == '0' && t[i] == '0') {
            pref00[i + 1]++;
        } else if (s[i] == '1' && t[i] == '1') {
            pref11[i + 1]++;
        } else if (s[i] == '0' && t[i] == '1') {
            pref01[i + 1]++;
        } else {
            pref10[i + 1]++;
        }
    }

    while (q--) {
        int l, r;
        cin >> l >> r;

        int cnt00 = pref00[r] - pref00[l - 1];
        int cnt11 = pref11[r] - pref11[l - 1];
        int cnt01 = pref01[r] - pref01[l - 1];
        int cnt10 = pref10[r] - pref10[l - 1];

        int leftBound = max({-cnt00, cnt01 - cnt10 - cnt11, -cnt10});
        int rightBound = min({cnt00, cnt01 - cnt10 + cnt11, cnt01});

        if (leftBound <= rightBound) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
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