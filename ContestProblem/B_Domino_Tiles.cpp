#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n; //number of tiles
    cin >> n;

    string s; 
    cin >> s;

    int evnWays = 0;
    for (int first = 0; first <= 1; first++) {
        bool ok = true;

        for (int i = 0; i < n; i += 2) {
            int ned = ((i / 2) % 2 == 0) ? first : 1 - first;

            if (s[i] != '?' && s[i] - '0' != ned) {
                ok = false;
                break;
            }
        }

        if (ok)
            evnWays++;
    }

    int odWays = 0;
    for (int first = 0; first <= 1; first++) {
        bool ok = true;

        for (int i = 1; i < n; i += 2) {
            int ned = (((i - 1) / 2) % 2 == 0) ? first : 1 - first;

            if (s[i] != '?' && s[i] - '0' != ned) {
                ok = false;
                break;
            }
        }

        if (ok)
            odWays++;
    }

    int result = (evnWays * odWays) % 998244353;
    cout << result << '\n';
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //number of testcases
    int testcases; cin >> testcases;
    while (testcases--){
        solve();
    }
    return 0;
}