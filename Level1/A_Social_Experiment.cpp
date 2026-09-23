#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    // If n is 2 or 3, we can't split them because we can't form a team of 1.
    if (n == 2 || n == 3) {
        cout << n << "\n";
    } 
    // Otherwise, we can perfectly split them or have a difference of 1.
    else {
        cout << (n % 2) << "\n";
    }
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