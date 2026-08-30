#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    int sum_a = 0, sum_b = 0;
    
    // Read array a and calculate its sum
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum_a += a[i];
    }
    
    // Read array b and calculate its sum
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        sum_b += b[i];
    }

    // Count the exact number of mismatches
    int diff = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            diff++;
        }
    }

    // The answer is the minimum of just flipping mismatches OR flipping to match totals + 1 rearrange
    int ans = min(diff, abs(sum_a - sum_b) + 1);
    cout << ans << "\n";
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