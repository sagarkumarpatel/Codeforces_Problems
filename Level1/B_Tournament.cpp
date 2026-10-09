#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    int n, j, k;
    cin >> n >> j >> k;
    
    int max_val = 0;
    int a_j = 0;
    
    // Read the array and simultaneously find the max value and player j's strength
    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        if (i == j) {
            a_j = x;
        }
        if (x > max_val) {
            max_val = x;
        }
    }
    
    // If we can leave 2 or more players, player j can just avoid fighting
    if (k >= 2) {
        cout << "YES\n";
    } 
    // If only 1 player remains, player j must be one of the strongest overall
    else {
        if (a_j == max_val) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
