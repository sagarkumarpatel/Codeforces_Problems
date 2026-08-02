// File: A_Threshold_Movement.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, q;
    cin >> n >> q;

    vector<int> a(n + 1);
    vector<int> prefix(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        prefix[i] = prefix[i - 1] + a[i];
    }

    while (q--) {
        int l, r, k;
        cin >> l >> r >> k;

        int originalSum = prefix[r] - prefix[l - 1];
        int newSum = (r - l + 1) * k;

        int totalSum = prefix[n] - originalSum + newSum;

        if (totalSum % 2 == 1) {
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