// File: A_Sereja_and_Bottles.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    if (!(cin >> n)) return ;

    vector<pair<int, int>> bottles(n);
    for (int i = 0; i < n; ++i) {
        cin >> bottles[i].first >> bottles[i].second; // a_i and b_i
    }

    int unopened_count = 0;

    for (int i = 0; i < n; ++i) {
        bool can_be_opened = false;
        for (int j = 0; j < n; ++j) {
            // Check if another bottle j can open bottle i
            if (i != j && bottles[j].second == bottles[i].first) { //if it will open
                can_be_opened = true;
                break;
            }
        }
        if (!can_be_opened) {
            unopened_count++;
        }
    }

    cout << unopened_count << "\n";
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // int t; cin >> t; while (t--)
    solve();
    return 0;
}