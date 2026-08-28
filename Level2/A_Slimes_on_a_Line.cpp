// File: A_Slimes_on_a_Line.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int min_val = INT_MAX, max_val = INT_MIN;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        min_val = min(min_val, a[i]);
        max_val = max(max_val, a[i]);
    }

    int ans = INT_MAX;
    // Try all possible target positions T from min_val to max_val
    for (int T = min_val; T <= max_val; T++) {
        int max_ops = 0;
        for (int i = 0; i < n; i++) {
            max_ops = max(max_ops, abs(a[i] - T));
        }
        ans = min(ans, max_ops);
    }

    cout << ans << "\n";
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--)
    solve();
    return 0;
}