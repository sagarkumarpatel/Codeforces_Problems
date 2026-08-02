// File: A_Threshold_Movement.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, x;
    cin >> n >> x;

    int currentKnowledge = 0;

    for (int stack = 0; stack < 3; stack++) {
        vector<int> books(n);

        for (int i = 0; i < n; i++) {
            cin >> books[i];
        }

        for (int i = 0; i < n; i++) {
            if ((books[i] | x) != x) {
                break;
            }

            currentKnowledge |= books[i];
        }
    }

    if (currentKnowledge == x) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
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