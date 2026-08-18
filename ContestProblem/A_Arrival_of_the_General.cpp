// File: A_Arrival_of_the_General.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    int max_val = -1, min_val = 101;
    int max_index = 0, min_index = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];

        // Find first occurrence of max element
        if (a[i] > max_val) {
            max_val = a[i];
            max_index = i;
        }

        // Find last occurrence of min element
        if (a[i] <= min_val) {
            min_val = a[i];
            min_index = i;
        }
    }

    // Calculate total swaps required
    int moves = max_index + (n - 1 - min_index);

    // If max is after min, they cross each other, saving 1 swap
    if (max_index > min_index) {
        moves--;
    }

    cout << moves << "\n";
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // int t; cin >> t; while (t--)
    solve();
    return 0;
}