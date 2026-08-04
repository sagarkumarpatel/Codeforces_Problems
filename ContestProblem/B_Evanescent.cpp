//B. Evanescen
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int orig_len = 1;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] != s[i + 1]) orig_len++;
    }

    int best_reduction = 0;
    for (int i = 1; i < n - 1; i++) {
        if (s[i] != s[i - 1] && s[i] != s[i + 1]) {
            if (s[i - 1] == s[i + 1]) {
                best_reduction = max(best_reduction, 2LL);
            } else {
                best_reduction = max(best_reduction, 1LL);
            }
        }
    }

    cout << orig_len - best_reduction << "\n";
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--)
    solve();
    return 0;
}