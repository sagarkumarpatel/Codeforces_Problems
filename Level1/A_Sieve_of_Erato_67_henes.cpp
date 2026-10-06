#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    bool found = false;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a == 67) {
            found = true;
        }
    }
    
    if (found) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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