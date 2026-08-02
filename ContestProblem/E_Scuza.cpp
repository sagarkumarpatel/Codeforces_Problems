// File: A_Threshold_Movement.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    vector<int> prefixSum(n);
    vector<int> prefixMax(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];

        if (i == 0) {
            prefixSum[i] = a[i];
            prefixMax[i] = a[i];
        } else {
            prefixSum[i] = prefixSum[i - 1] + a[i];
            prefixMax[i] = max(prefixMax[i - 1], a[i]);
        }
    }

    while (q--) {
        int k;
        cin >> k;

        int pos = upper_bound(prefixMax.begin(), prefixMax.end(), k) - prefixMax.begin() - 1;

        if (pos < 0) {
            cout << 0 << " ";
        } else {
            cout << prefixSum[pos] << " ";
        }
    }

    cout << "\n";
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