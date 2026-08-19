// File: A_Presents.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;

    vector<int> result(n + 1);

    for (int giver = 1; giver <= n; ++giver) {
        int recipient;
        cin >> recipient;
        result[recipient] = giver;
    }

    for (int recipient = 1; recipient <= n; ++recipient) {
        cout << result[recipient] << (recipient == n ? "" : " ");
    }
    cout << "\n";
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // int t; cin >> t; while (t--)
    solve();
    return 0;
}