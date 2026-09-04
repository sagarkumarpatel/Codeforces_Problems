#include <iostream>

using namespace std;

void solve() {
    long long x, y;
    cin >> x >> y;
    
    // Check if 2 steps are enough (move x, then move y)
    if (x < y) {
        cout << 2 << "\n";
    } 
    // Check if 3 steps are enough (move 1, move y, move x - 1)
    else if (x >= y + 2 && y >= 2) {
        cout << 3 << "\n";
    } 
    // Otherwise, it's impossible
    else {
        cout << -1 << "\n";
    }
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