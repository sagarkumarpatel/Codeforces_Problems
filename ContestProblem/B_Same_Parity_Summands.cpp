#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, k;
    cin >> n >> k;

    if (n >= k && (n - k) % 2 == 0) {

        cout << "YES\n";

        for (int i = 1; i < k; i++) {
            cout << 1 << " ";
        }

        cout << n - k + 1 << "\n";
    }
    else if (n >= 2 * k && (n - 2 * k) % 2 == 0) {

        cout << "YES\n";

        for (int i = 1; i < k; i++) {
            cout << 2 << " ";
        }

        cout << n - 2 * k + 2 << "\n";
    }
    else {
        cout << "NO\n";
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}