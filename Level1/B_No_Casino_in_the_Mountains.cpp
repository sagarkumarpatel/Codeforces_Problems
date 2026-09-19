#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int hikes = 0;
    int consecutive_good = 0;

    for (int i = 0; i < n; ++i) {
        if (a[i] == 0) {
            consecutive_good++;
            if (consecutive_good == k) {
                hikes++;
                consecutive_good = 0;
                i++; // Skip the mandatory break day
            }
        } else {
            consecutive_good = 0;
        }
    }

    cout << hikes << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}