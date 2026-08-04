// File: D_Silhouette.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> b(n);
    map<int, int> freq;
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        freq[b[i]]++;
    }

    vector<pair<int, int>> u;
    for (auto p : freq) {
        u.push_back(p);
    }

    if (u[0].first != 0) {
        cout << -1 << "\n";
        return;
    }

    int k = u.size();
    map<int, int> val_map;
    int prev_v = 0;

    for (int j = 0; j < k - 1; j++) {
        int diff = u[j + 1].first - u[j].first;
        int count = u[j].second;

        if (diff % count != 0) {
            cout << -1 << "\n";
            return;
        }

        int v = diff / count;
        if (v <= prev_v) {
            cout << -1 << "\n";
            return;
        }

        val_map[u[j].first] = v;
        prev_v = v;
    }

    val_map[u[k - 1].first] = prev_v + 1;

    for (int i = 0; i < n; i++) {
        cout << val_map[b[i]] << (i == n - 1 ? "" : " ");
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