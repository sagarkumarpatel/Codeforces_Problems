#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> req(n);
    for (int i = 0; i < n; i++)
        cin >> req[i];

    vector<int> nums(n * m);
    for (int i = 0; i < n * m; i++)
        cin >> nums[i];

    int result = m;
    vector<int> better;

    for (int i = n - 1; i >= 0; i--) {
        auto it = nums.begin() + i * m;
        sort(it, it + m, greater<int>());

        vector<int> temp;
        int p = 0, q = 0;

        while ((int)temp.size() < m && (p < (int)better.size() || q < m)) {
            if (p < (int)better.size() && q < m) {
                if (better[p] >= it[q])
                    temp.push_back(better[p++]);
                else
                    temp.push_back(it[q++]);
            }
            else if (p < (int)better.size()) {
                temp.push_back(better[p++]);
            }
            else {
                temp.push_back(it[q++]);
            }
        }

        better = temp;

        int sum = 0;
        for (int j = 0; j < (int)better.size(); j++) {
            sum += better[j];
            if (sum >= req[i]) {
                result = min(result, j + 1);
                break;
            }
        }

        if (result == 1)
            break;
    }

    cout << result << "\n";
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