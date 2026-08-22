// File: B_Sort_the_Subarray.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), a_prime(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> a_prime[i];
    }

    int l = 0, r = n - 1;
    while (l < n && a[l] == a_prime[l]) {
        l++;
    }
    while (r >= 0 && a[r] == a_prime[r]) {
        r--;
    }

    while (l > 0 && a_prime[l - 1] <= a_prime[l]) {
        l--;
    }
    while (r < n - 1 && a_prime[r + 1] >= a_prime[r]) {
        r++;
    }

    cout << l + 1 << " " << r + 1 << "\n";
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--)
    solve();
    return 0;
}