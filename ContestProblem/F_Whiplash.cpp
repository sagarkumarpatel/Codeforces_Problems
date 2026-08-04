// File: F_Whiplash.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n; //length of the array
    cin >> n;
    vector<int> a(n), b(n);
    int sa = 0, sb = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sa ^= a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        sb ^= b[i];
    }

    vector<int> ca(n + 1), cb(n + 1);
    for (int i = 0; i < n; i++) {
        ca[i] = a[i] ^ sa;
        cb[i] = b[i] ^ sb;
    }
    ca[n] = sa;
    cb[n] = sb;

    sort(ca.begin(), ca.end());
    sort(cb.begin(), cb.end());

    if (ca == cb) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) //test cases
    solve();
    return 0;
}