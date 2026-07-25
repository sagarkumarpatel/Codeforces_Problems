#include <bits/stdc++.h>
using namespace std;

#define int long long

bool isPossible(int value, int n, int k) {
    return (value - value / n) >= k;
}

void solve() {
    int n, k;
    cin >> n >> k;

    int left = 1;
    int right = 2e18;
    int answer = -1;

    while (left <= right) {

        int mid = left + (right - left) / 2;

        if (isPossible(mid, n, k)) {
            answer = mid;
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }

    }

    cout << answer << "\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}