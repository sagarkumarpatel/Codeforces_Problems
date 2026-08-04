// File: C_1_Marenol_easy_version.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    int even_a = 0, odd_a = 0;
    int even_b = 0, odd_b = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            if (a[i] == '1') even_a++;
            if (b[i] == '1') even_b++;
        } else {
            if (a[i] == '1') odd_a++;
            if (b[i] == '1') odd_b++;
        }
    }

    if (even_a == even_b && odd_a == odd_b) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--)
    solve();
    return 0;
}