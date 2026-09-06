#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    // Sort the array to easily find the closest pairs
    sort(a.begin(), a.end());
    
    int max_diff = 0;
    
    // Pair adjacent elements and find the maximum difference
    for (int i = 0; i < n; i += 2) {
        max_diff = max(max_diff, a[i+1] - a[i]);
    }
    
    cout << max_diff << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}