#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n; //taking n as the input
    
    int len = 2 * n;
    vector<int> a(len + 1);

    vector<int> L(n + 1, 0);
    vector<int> R(n + 1, 0);
    
    for (int i = 1; i <= len; ++i) {
        cin >> a[i];
        if (L[a[i]] == 0) {
            L[a[i]] = i;
        } else {
            R[a[i]] = i;
        }
    }
    vector<long long> dp(len + 1, 0); //init dp
    
    for (int i = 1; i <= len; ++i) {
        dp[i] = dp[i - 1] + 1;
        
        if (R[a[i]] == i) {
            int l = L[a[i]];
            long long interval_len = i - l + 1;
            dp[i] = max(dp[i], dp[l - 1] + interval_len * interval_len);
        }
    }
    
    cout << dp[len] << "\n";
}

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}