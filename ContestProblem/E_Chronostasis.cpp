// File: E_Chronostasis.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    multiset<int> ms; //contain duplicate also
    int total_sum = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ms.insert(x);
        total_sum += x;
    }

    if (total_sum < 1) {
        cout << -1 << "\n";
        return;
    }

    int curr = 0;
    for (int i = 0; i < n; i++) {
        auto it = ms.lower_bound(1 - curr);
        curr += *it;
        cout << curr << (i == n - 1 ? "" : " ");
        ms.erase(it);
    }
    cout << "\n";
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--)
    solve();
    return 0;
}