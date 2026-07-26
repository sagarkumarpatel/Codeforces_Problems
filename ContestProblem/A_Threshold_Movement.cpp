// File: A_Threshold_Movement.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;

    vector<int> w(n + 1);

    int minOdd = LLONG_MAX;
    int maxEven = LLONG_MIN;

    for (int i = 1; i <= n; i++) {
        cin >> w[i];

        if (i %2!=0)  //odd check
            minOdd = min(minOdd, w[i]);
        else
            maxEven = max(maxEven, w[i]);
    }

    if (n %2!=0) {
        cout << "NO\n";
        return;
    }

    if (minOdd - maxEven >= 2)
        cout << "YES\n";
    else
        cout << "NO\n";
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}