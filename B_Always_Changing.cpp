#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int zero = 0, one = 0;
    for (char c : s) {
        if (c == '0')
            zero++;
        else
            one++;
    }

    int diff = zero - one;

    if (abs(diff) > 2) {
        cout << -1 << "\n";
        return;
    }

    int len0 = 0;
    char required = '0';
    for (char c : s) {
        if (c == required) {
            len0++;
            required = (required == '0' ? '1' : '0');
        }
    }

    int len1 = 0;
    required = '1';
    for (char c : s) {
        if (c == required) {
            len1++;
            required = (required == '0' ? '1' : '0');
        }
    }

    int odd0 = 0, odd1 = 0, even0 = 0, even1 = 0;

    if (len0 > 0) {
        if (len0 % 2)
            odd0 = len0;
        else
            odd0 = len0 - 1;

        if (len0 % 2 == 0)
            even0 = len0;
        else
            even0 = len0 - 1;
    }

    if (len1 > 0) {
        if (len1 % 2)
            odd1 = len1;
        else
            odd1 = len1 - 1;

        if (len1 % 2 == 0)
            even1 = len1;
        else
            even1 = len1 - 1;
    }

    int even = max(even0, even1);
    int good = -1;

    for (int x : {-1LL, 0LL, 1LL}) {
        if (x >= diff - 1 && x <= diff + 1) {
            if (x == -1)
                good = max(good, odd1);
            else if (x == 0)
                good = max(good, even);
            else
                good = max(good, odd0);
        }
    }

    if (good <= 0)
        cout << -1 << "\n";
    else
        cout << n - good << "\n";
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;//no of test cases

    while (t--){
        solve();
    }
    return 0;
}