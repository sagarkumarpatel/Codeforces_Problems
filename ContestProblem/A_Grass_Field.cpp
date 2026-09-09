#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int count = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            int x;
            cin >> x;
            if (x == 1) count++;
        }
    }

    if (count == 0) {
        cout << 0 << "\n";
    } else if (count == 4) {
        cout << 2 << "\n";
    } else {
        cout << 1 << "\n";
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; 
    cin >> t; 
    while (t--) {
        solve();
    }
    return 0;
}