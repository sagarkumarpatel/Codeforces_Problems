#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    int zeros = 0;
    int minus_ones = 0;
    
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x == 0) {
            zeros++;
        } else if (x == -1) {
            minus_ones++;
        }
    }
    
    // Every 0 must be increased to 1 (costs 1 operation each)
    int ans = zeros;
    
    // If there is an odd number of -1s, we must change one of them to 1
    // Changing -1 to 1 costs exactly 2 operations (-1 -> 0 -> 1)
    if (minus_ones % 2 != 0) {
        ans += 2;
    }
    
    cout << ans << "\n";
}

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
