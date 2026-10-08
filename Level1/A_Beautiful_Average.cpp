#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int max_val = 0;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        max_val = max(max_val, a);
    }
    cout << max_val << "\n";
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