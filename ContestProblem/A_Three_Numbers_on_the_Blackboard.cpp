#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    vector<int> Nums(3); //contains only three integers
    cin >> Nums[0] >> Nums[1] >> Nums[2];

    sort(Nums.begin(), Nums.end());

    int res = min(Nums[2] - Nums[0], Nums[1]);
    cout << res << '\n';
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //number of testcases
    int testcases; cin >> testcases;
    while (testcases--){
        solve();
    }
    return 0;
}