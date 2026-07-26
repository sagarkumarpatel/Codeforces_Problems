// File: F_2_Sort.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, k;
        cin >> n >> k;
        
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int ans = 0;
        int consecutive = 0;
        
        for (int i = 0; i < n - 1; i++) {
            if (a[i] < 2 * a[i + 1]) {
                consecutive++;
            } else {
                consecutive = 0;
            }
            
            if (consecutive >= k) {
                ans++;
            }
        }
        
        cout << ans << "\n";
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--)
    solve();
    return 0;
}