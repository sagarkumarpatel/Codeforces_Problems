#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
   //taking a vector of n size
    vector<int> arr(n);
    map<int, int> mp;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mp[arr[i]]++;
        sum += arr[i];
    }

    int mx = 0, val = 0;

    for (auto it : mp) {
        if (it.second > mx) {
            mx = it.second;
            val = it.first;
        }
    }

    int rem = n - mx;

    if (mx > rem + 1) {
        int sum2 = sum - mx * val;
        cout << sum2 + (rem + 2) * val << "\n";
    } else {
        cout << sum << "\n";
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--){
        solve();
    }

    return 0;
}