#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m; //taling input n and m

    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<long long> b(m);
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }
    if (n < 2 * m) {
        cout << "NO\n";
        return;
    }

    // Sort both arrays to align lower and upper bounds
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for (int i = 0; i < m; ++i) {
        // The i-th smallest element of 'a' must be smaller than b[i]
        if (a[i] > b[i]) {
            cout << "NO\n";
            return;
        }
        
        if (a[n - m + i] < b[i]) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
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