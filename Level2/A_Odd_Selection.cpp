// File: A_Odd_Selection.cpp
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

    int min_difficulty = 1e9;

    // Try removing each element from index 1 to n-2
    for (int i = 1; i < n - 1; i++) {
        int current_max_diff = 0;
        
        for (int j = 0; j < n - 1; j++) {
            if (j == i) continue; // Skip the gap starting at the removed hold
            
            if (j + 1 == i) {
                // If the next hold is the one being removed, 
                // calculate the distance skipping over it to the one after
                current_max_diff = max(current_max_diff, a[j + 2] - a[j]);
            } else {
                // Otherwise, normal adjacent difference
                current_max_diff = max(current_max_diff, a[j + 1] - a[j]);
            }
        }
        
        min_difficulty = min(min_difficulty, current_max_diff);
    }

    cout << min_difficulty << "\n";
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // int t; cin >> t; while (t--)
    solve();
    return 0;
}