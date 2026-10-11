#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }

    // Array to store the index of the maximum element in the suffix p[i...n-1]
    vector<int> suf_max_idx(n);
    suf_max_idx[n - 1] = n - 1;
    
    // Precompute suffix maximums from right to left
    for (int i = n - 2; i >= 0; --i) {
        if (p[i] > p[suf_max_idx[i + 1]]) {
            suf_max_idx[i] = i;
        } else {
            suf_max_idx[i] = suf_max_idx[i + 1];
        }
    }

    // Find the first position where the element is not the maximum of its suffix
    for (int i = 0; i < n; ++i) {
        if (suf_max_idx[i] != i) {
            // Reverse the segment to bring the maximum element to position i
            reverse(p.begin() + i, p.begin() + suf_max_idx[i] + 1);
            break; // We can only perform the operation exactly once
        }
    }

    // Output the modified permutation
    for (int i = 0; i < n; ++i) {
        cout << p[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
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