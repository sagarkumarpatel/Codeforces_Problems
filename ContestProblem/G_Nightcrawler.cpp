// File: G_Nightcrawler.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    vector<int> tokens(3);
    for (int i = 0; i < 3; ++i) {
        cin >> tokens[i];
    }
    sort(tokens.begin(), tokens.end());
    
    // The middle element remains constant; the gap between middle and smallest,
    // or middle and largest, reduces by 1 each round.
    int rounds = min(tokens[1] - tokens[0], tokens[2] - tokens[1]);
    cout << rounds << "\n";
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--)
    solve();
    return 0;
}