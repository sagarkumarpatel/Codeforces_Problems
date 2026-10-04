#include <iostream>

using namespace std;

void solve() {
    int x;
    cin >> x;
    // Outputting x maximizes min(x, y) because min(x, x) = x, 
    // which is the maximum possible value we can achieve.
    cout << x << "\n"; 
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