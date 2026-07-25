#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> prices(n);

    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    sort(prices.begin(), prices.end());

    int q;
    cin >> q;

    while (q--) {

        int money;
        cin >> money;

        int left = 0;
        int right = n;

        while (left < right) {

            int mid = left + (right - left) / 2;

            if (prices[mid] <= money) {
                left = mid + 1;
            }
            else {
                right = mid;
            }

        }

        cout << left << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}