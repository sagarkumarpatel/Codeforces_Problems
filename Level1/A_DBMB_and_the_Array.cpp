#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, s, x;
    cin >> n >> s >> x;
    
    int current_sum = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        current_sum += a;
    }
    
    // Check if we can reach the target sum 's'
    if (s >= current_sum && (s - current_sum) % x == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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