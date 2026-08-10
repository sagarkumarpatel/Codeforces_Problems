#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int len = 2 * n;
    bool zro = false;

    for (char c : s) {
        if (c == '0') {
            zro = true;
            break;
        }
    }

    string result = s;

    if (zro) {
        for (int i = 0; i < len; i++) {
            int nxt = (i + 1) % len;

            if (s[i] == '1' && s[nxt] == '0') {
                result[i] = '0';
                result[nxt] = '1';
            }
        }
    }

    int rd = 0, blu = 0;

    for (int i = 0; i < len; i++) {
        if (result[i] == '1') {
            if (i % 2 == 0)
                rd++;
            else
                blu++;
        }
    }

    cout << blu << " " << rd << '\n';
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //number of test cases
    int testcases; cin >> testcases;
    while (testcases--){
        solve();
    }
    return 0;
}