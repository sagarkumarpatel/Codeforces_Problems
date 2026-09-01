#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    // Use 1-based indexing to make prefix sum calculations cleaner
    vector<long long> v(n + 1);
    vector<long long> u(n + 1);

    for (int i = 1; i <= n; ++i) {
        cin >> v[i];
        u[i] = v[i]; // Copy elements to sort later
    }

    // Sort the 'u' array (ignoring the 0th index)
    sort(u.begin() + 1, u.end());

    // Prefix sum arrays
    vector<long long> pref1(n + 1, 0);
    vector<long long> pref2(n + 1, 0);

    for (int i = 1; i <= n; ++i) {
        pref1[i] = pref1[i - 1] + v[i];
        pref2[i] = pref2[i - 1] + u[i];
    }

    int m;
    cin >> m;

    // Process queries
    while (m--) {
        int type, l, r;
        cin >> type >> l >> r;
        
        if (type == 1) {
            cout << pref1[r] - pref1[l - 1] << "\n";
        } else if (type == 2) {
            cout << pref2[r] - pref2[l - 1] << "\n";
        }
    }

    return 0;
}