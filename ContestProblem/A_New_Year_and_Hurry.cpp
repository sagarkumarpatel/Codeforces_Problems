#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    int availableTime = 240 - k;

    int left = 0;
    int right = n;
    int answer = 0;

    while (left <= right) {

        int mid = left + (right - left) / 2;

        int requiredTime = 5 * mid * (mid + 1) / 2;

        if (requiredTime <= availableTime) {
            answer = mid;
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }

    }

    cout << answer << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}