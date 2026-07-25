#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int middle = n / 2;

    vector<int> prefixSum(n + 1, 0);

    for (int i = 0; i < n; i++) {
        prefixSum[i + 1] = prefixSum[i] + a[i];
    }

    int left = a[middle];
    int right = a[middle] + k;
    int answer = a[middle];

    while (left <= right) {

        int target = left + (right - left) / 2;

        int position = lower_bound(a.begin() + middle, a.end(), target) - a.begin();

        int count = position - middle;
        int currentSum = prefixSum[position] - prefixSum[middle];
        int operations = count * target - currentSum;

        if (operations <= k) {
            answer = target;
            left = target + 1;
        }
        else {
            right = target - 1;
        }

    }

    cout << answer << "\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}