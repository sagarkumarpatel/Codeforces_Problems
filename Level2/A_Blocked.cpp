#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    set<int> unique_elements;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        unique_elements.insert(a[i]);
    }

    // If the set size is smaller than n, we have duplicates.
    // A duplicate means the second occurrence will always be equal 
    // to a subset of size 1 (the first occurrence).
    if (unique_elements.size() < n) {
        cout << -1 << "\n";
        return;
    }

    // Sort strictly descending.
    // Since a_1 > a_2 > ... > a_n, and all a_i >= 1,
    // any subset sum of elements before a_i will be > a_i.
    sort(a.rbegin(), a.rend());
    
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
}

int main() {
    // Standard fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}