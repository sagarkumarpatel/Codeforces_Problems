// File: G_Binary_Deque.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, s;
    cin >> n >> s;
    
    vector<int> a(n);
    int total = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }
    
    if (total < s) {
        cout << -1 << "\n";
        return;
    }
    
    if (total == s) {
        cout << 0 << "\n";
        return;
    }
    
    int left = 0;
    int current_sum = 0;
    int max_len = 0;
    
    for (int right = 0; right < n; right++) {
        current_sum += a[right];
        
        while (current_sum > s && left <= right) {
            current_sum -= a[left];
            left++;
        }
        
        if (current_sum == s) {
            max_len = max(max_len, right - left + 1);
        }
    }
    
    cout << n - max_len << "\n";
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