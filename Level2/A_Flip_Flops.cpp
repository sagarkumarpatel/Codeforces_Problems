#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    long long c, k;
    cin >> n >> c >> k;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Sort monster combat powers in ascending order
    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++) {
        // If we can defeat the current monster
        if (a[i] <= c) {
            // Calculate how many flip-flops we can throw without exceeding c
            long long used_flips = min(k, c - a[i]);
            
            // Gain the monster's base power + the extra power from the flip-flops
            c += a[i] + used_flips;
            
            // Deduct the used flip-flops from our total
            k -= used_flips;
        } else {
            // Cannot defeat this monster (and therefore any stronger ones), stop searching
            break;
        }
    }

    cout << c << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}