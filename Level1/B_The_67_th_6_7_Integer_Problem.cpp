#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    long long sum = 0;
    int max_val = -100; // Minimum possible value based on constraints is -67
    
    for (int i = 0; i < 7; ++i) {
        int a;
        cin >> a;
        sum += a;
        max_val = max(max_val, a);
    }
    
    cout << 2LL * max_val - sum << "\n";
}

int main() {
    // Optimize standard I/O operations for speed
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