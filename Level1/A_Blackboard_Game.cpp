#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    // If n is a multiple of 4, the groups are perfectly balanced for Bob
    if (n % 4 == 0) {
        cout << "Bob\n";
    } else {
        cout << "Alice\n";
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