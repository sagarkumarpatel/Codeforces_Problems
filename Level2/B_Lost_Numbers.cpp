// File: B_Lost_Numbers.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    vector<int> nums = {4, 8, 15, 16, 23, 42};
    vector<int> a(7);

    // Query 1: find a[1]
    cout << "? 1 1" << endl;
    int res1;
    cin >> res1;
    for (int x : nums) {
        if (x * x == res1) {
            a[1] = x;
            break;
        }
    }

    // Query 2: find a[2]
    cout << "? 2 2" << endl;
    int res2;
    cin >> res2;
    for (int x : nums) {
        if (x * x == res2) {
            a[2] = x;
            break;
        }
    }

    // Query 3: find product of a[3] * a[4]
    cout << "? 3 4" << endl;
    int res3;
    cin >> res3;

    // Query 4: find product of a[4] * a[5]
    cout << "? 4 5" << endl;
    int res4;
    cin >> res4;

    // Determine a[3], a[4], a[5] using the remaining numbers
    vector<int> pool;
    for (int x : nums) {
        if (x != a[1] && x != a[2]) {
            pool.push_back(x);
        }
    }

    // Try all permutations of the pool for (a[3], a[4], a[5], a[6])
    // Since there are only 4! = 24 permutations, we can easily check which one matches res3 and res4.
    sort(pool.begin(), pool.end());
    do {
        if (pool[0] * pool[1] == res3 && pool[1] * pool[2] == res4) {
            a[3] = pool[0];
            a[4] = pool[1];
            a[5] = pool[2];
            a[6] = pool[3];
            break;
        }
    } while (next_permutation(pool.begin(), pool.end()));

    // Print the answer
    cout << "!";
    for (int i = 1; i <= 6; i++) {
        cout << " " << a[i];
    }
    cout << endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // int t; cin >> t; while (t--)
    solve();
    return 0;
}