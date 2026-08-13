// File: A_Soft_Drinking.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, k, l, c, d, p, nl, np;
    if (cin >> n >> k >> l >> c >> d >> p >> nl >> np) {
        // Calculate max toasts based on each resource
        int toasts_from_drink = (k * l) / nl;
        int toasts_from_limes = c * d;
        int toasts_from_salt = p / np;

        // Find the limiting resource
        int total_toasts = min({toasts_from_drink, toasts_from_limes, toasts_from_salt});

        // Calculate toasts per friend
        int result = total_toasts / n;

        cout << result << "\n";
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // int t; cin >> t; while (t--)
    solve();
    return 0;
}