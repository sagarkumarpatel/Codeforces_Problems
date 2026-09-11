#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // If k == 1, we can greedily make every alternating pile too tall
    if (k == 1) {
        cout << (n - 1) / 2 << "\n";
        return;
    }

    // If k >= 2, we can never create new too-tall piles
    int count = 0;
    for (int i = 1; i < n - 1; ++i) {
        if (a[i] > a[i - 1] + a[i + 1]) {
            count++;
        }
    }

    cout << count << "\n";
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