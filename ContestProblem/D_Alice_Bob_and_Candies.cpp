#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int left = 0;
    int right = n - 1;

    int moves = 0;
    int aliceScore = 0;
    int bobScore = 0;
    int previousMove = 0;

    while (left <= right) {

        int currentMove = 0;
        moves++;

        if (moves % 2 == 1) {

            while (left <= right && currentMove <= previousMove) {
                currentMove += a[left];
                left++;
            }

            aliceScore += currentMove;
        }
        else {

            while (left <= right && currentMove <= previousMove) {
                currentMove += a[right];
                right--;
            }

            bobScore += currentMove;
        }

        previousMove = currentMove;
    }

    cout << moves << " " << aliceScore << " " << bobScore << "\n";
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