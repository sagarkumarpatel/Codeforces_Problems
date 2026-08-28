#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    long long sum_max = 0;
    long long max_min_val = 0;

    for (int i = 0; i < n; i++) {
        sum_max += max(a[i], b[i]);
        max_min_val = max(max_min_val, min(a[i], b[i]));
    }

    cout << sum_max + max_min_val << "\n";
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