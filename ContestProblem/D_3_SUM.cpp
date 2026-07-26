// File: D_3_SUM.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
     int n;
        cin >> n;
        
        vector<int> freq(10, 0);
        
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            int last = x % 10;
            if (freq[last] < 3) {
                freq[last]++;
            }
        }
        
        // Collect digits with their frequencies
        vector<int> digits;
        for (int d = 0; d <= 9; d++) {
            for (int i = 0; i < freq[d]; i++) {
                digits.push_back(d);
            }
        }
        
        bool found = false;
        int m = digits.size();
        
        // Try all combinations of 3 digits
        for (int i = 0; i < m && !found; i++) {
            for (int j = i + 1; j < m && !found; j++) {
                for (int k = j + 1; k < m && !found; k++) {
                    int sum = digits[i] + digits[j] + digits[k];
                    if (sum % 10 == 3) {
                        found = true;
                    }
                }
            }
        }
        
        cout << (found ? "YES" : "NO") << "\n";
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--)
    solve();
    return 0;
}