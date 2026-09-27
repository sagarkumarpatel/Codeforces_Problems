#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    // Since every positive integer is a perfect root, 
    // we can just print the numbers from 1 to n.
    for (int i = 1; i <= n; ++i) {
        cout << i << " ";
    }
    cout << "\n";
}

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}