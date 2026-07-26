// File: B_All_Distinct.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
     int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        // Count distinct elements
        set<int> s(a.begin(), a.end());
        int distinct = s.size();
        
        int duplicates = n - distinct;
        
        if (duplicates % 2 == 0) {
            cout << distinct << "\n";
        } else {
            cout << distinct - 1 << "\n";
        }
    }

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--)
    solve();
    return 0;
}