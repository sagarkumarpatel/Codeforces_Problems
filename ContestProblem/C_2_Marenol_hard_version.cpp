// File: C_2_Marenol_hard_version.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    vector<int> even_a, odd_a;
    vector<int> even_b, odd_b;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            if (a[i] == '1') even_a.push_back(i);
            if (b[i] == '1') even_b.push_back(i);
        } else {
            if (a[i] == '1') odd_a.push_back(i);
            if (b[i] == '1') odd_b.push_back(i);
        }
    }

    if (even_a.size() != even_b.size() || odd_a.size() != odd_b.size()) {
        cout << -1 << "\n";
        return;
    }

    int total_ops = 0;
    for (size_t i = 0; i < even_a.size(); i++) {
        total_ops += abs(even_a[i] - even_b[i]) / 2;
    }
    for (size_t i = 0; i < odd_a.size(); i++) {
        total_ops += abs(odd_a[i] - odd_b[i]) / 2;
    }

    cout << total_ops << "\n";
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--)
    solve();
    return 0;
}