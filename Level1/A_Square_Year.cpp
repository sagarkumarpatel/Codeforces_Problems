#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void solve() {
    string s;
    cin >> s;
    
    // Convert the 4-character string to an integer
    int n = stoi(s);
    
    // Find the integer square root
    int root = round(sqrt(n));
    
    // Check if it's a perfect square
    if (root * root == n) {
        // Output 0 and the square root as the two numbers
        cout << 0 << " " << root << "\n";
    } else {
        // Not a perfect square
        cout << -1 << "\n";
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