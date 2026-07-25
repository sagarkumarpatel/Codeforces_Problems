#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;

    vector<int> candies(n);

    for (int i = 0; i < n; i++) {
        cin >> candies[i];
    }

    sort(candies.begin(), candies.end(), greater<int>());

    vector<long long> prefixSum(n);

    prefixSum[0] = candies[0];

    for (int i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i - 1] + candies[i];
    }

    while (q--) {

        long long requiredCandies;
        cin >> requiredCandies;

        if (prefixSum[n - 1] < requiredCandies) {
            cout << -1 << "\n";
            continue;
        }

        int answer = lower_bound(prefixSum.begin(), prefixSum.end(), requiredCandies) - prefixSum.begin();

        cout << answer + 1 << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}