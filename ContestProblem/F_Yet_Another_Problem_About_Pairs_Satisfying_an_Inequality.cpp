
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;

    vector<int> a(n + 1);
    vector<int> validIndices;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];

        if (a[i] < i) {
            validIndices.push_back(i);
        }
    }

    int totalPairs = 0;

    for (int index : validIndices) {
        int count = lower_bound(validIndices.begin(), validIndices.end(), a[index]) - validIndices.begin();
        totalPairs += count;
    }

    cout << totalPairs << "\n";
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}