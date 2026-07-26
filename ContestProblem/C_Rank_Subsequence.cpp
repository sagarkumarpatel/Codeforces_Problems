// File: C_Rank_Subsequence.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    
    vector<int> l(n), r(n), u(n), v(n);
    for (int i = 0; i < n; i++) {
        cin >> l[i] >> r[i] >> u[i] >> v[i];
    }
    
    int ans = 0;
    
    for (int m = n; m >= 1; m--) {
        vector<int> dp(n + 1, -1);
        dp[0] = 0;
        
        for (int i = 0; i < n; i++) {
            for (int j = min(m, i + 1); j >= 1; j--) {
                if (dp[j-1] != -1) {
                    if (j >= l[i] && j <= r[i]) continue;
                    int rightRank = m - j + 1;
                    if (rightRank >= u[i] && rightRank <= v[i]) continue;
                    dp[j] = max(dp[j], dp[j-1] + 1);
                }
            }
        }
        
        if (dp[m] >= m) {
            ans = m;
            break;
        }
    }
    
    cout << ans << "\n";
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    int t; 
    cin >> t; 
    while (t--)
        solve();
    return 0;
}