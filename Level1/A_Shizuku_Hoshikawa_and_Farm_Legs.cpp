#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    if (n % 2 != 0) {
        cout << 0 << "\n";
    } else {
        cout << (n / 4) + 1 << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}