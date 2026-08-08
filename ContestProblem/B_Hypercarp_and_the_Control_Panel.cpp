#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    vector<int> colr, length;

    for (int i = 0; i < n; i++) {
        if (colr.empty() || nums[i] != colr.back()) {
            colr.push_back(nums[i]);
            length.push_back(1);
        } else {
            length.back()++;
        }
    }

    int blen = colr.size();

    for (int i = 0; i + 1 < blen; i++) {
        if (length[i] >= 2 && length[i + 1] >= 2) {
            cout << blen + 2 << "\n";
            return;
        }
    }

    for (int i = 0; i < blen; i++) {
        if (length[i] >= 2) {
            if (i + 1 < blen && (i + 2 >= blen || colr[i + 2] != colr[i])) {
                cout << blen + 1 << "\n";
                return;
            }

            if (i - 1 >= 0 && (i - 2 < 0 || colr[i - 2] != colr[i])) {
                cout << blen + 1 << "\n";
                return;
            }
        }
    }
   //in lst if everythings is false then blen is ans
    cout << blen << "\n";
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int testcases;
    cin >> testcases;

    while (testcases--){
        solve();
    }
    return 0;
}