// File: A_Threshold_Movement.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, m;
    cin >> n >> m;

    int temp = n;
    int countTwo = 0;
    int countFive = 0;

    while (temp > 0 && temp % 2 == 0) {
        countTwo++;
        temp /= 2;
    }

    while (temp > 0 && temp % 5 == 0) {
        countFive++;
        temp /= 5;
    }

    int multiplier = 1;

    while (countTwo < countFive && multiplier * 2 <= m) {
        multiplier *= 2;
        countTwo++;
    }

    while (countFive < countTwo && multiplier * 5 <= m) {
        multiplier *= 5;
        countFive++;
    }

    while (multiplier * 10 <= m) {
        multiplier *= 10;
    }

    if (multiplier > 1) {
        multiplier *= (m / multiplier);
    } else {
        multiplier = m;
    }

    cout << n * multiplier << "\n";
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}