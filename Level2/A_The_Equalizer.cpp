#include <iostream>

using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;

    long long sum = 0;
    for (int i = 0; i < n; ++i) {
        long long a;
        cin >> a;
        sum += a;
    }

    // Shaunak wins if the initial sum is odd (wins normal play)
    // OR if n * k is even (uses special move on turn 1, forcing Yash to lose)
    if (sum % 2 != 0 || (n * k) % 2 == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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