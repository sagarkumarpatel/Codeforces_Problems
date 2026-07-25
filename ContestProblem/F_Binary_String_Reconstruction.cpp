#include <bits/stdc++.h>
using namespace std;

string ans;

void solve() {
    int n0, n1, n2;
    cin >> n0 >> n1 >> n2;

    if (n1 == 0) {
        if (n0 > 0) {
            for (int i = 0; i <= n0; i++)
                ans += '0';
        } else if (n2 > 0) {
            for (int i = 0; i <= n2; i++)
                ans += '1';
        }
        ans += '\n';
        return;
    }

    // First print all consecutive 1's
    for (int i = 0; i <= n2; i++)
        ans += '1';

    // Then print all consecutive 0's
    for (int i = 0; i <= n0; i++)
        ans += '0';

    int rem1 = n1 - 1;
    int flag = 1;

    // Alternate remaining characters
    for (int i = 0; i < rem1; i++) {
        ans += char(flag + '0');
        flag ^= 1;
    }

    ans += '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    cout << ans;

    return 0;
}