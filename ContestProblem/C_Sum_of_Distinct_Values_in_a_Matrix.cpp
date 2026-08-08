#include <bits/stdc++.h>
using namespace std;
#define int long long

struct item {
    int num;
    int side;
};

int calc(vector<item>& v, int ca, int cb) {
    int sum = 0;
    int cntA = 0, cntB = 0, cnt = 0;
    int limt = ca + cb;

    for (auto x : v) {
        if (cnt == limt)
            break;

        if (x.side == 0) {
            if (cntA < ca) {
                cntA++;
                cnt++;
                sum += x.num;
            }
        }
        else if (x.side == 1) {
            if (cntB < cb) {
                cntB++;
                cnt++;
                sum += x.num;
            }
        }
        else {
            cnt++;
            sum += x.num;
        }
    }

    return sum;
}

void solve() {
    int n, m, x, y;
    cin >> n >> m >> x >> y;

    vector<int> a(x), b(y);

    for (int i = 0; i < x; i++)
        cin >> a[i];

    for (int i = 0; i < y; i++)
        cin >> b[i];

    vector<item> v;

    int i = x - 1, j = y - 1;

    while (i >= 0 || j >= 0) {
        if (i >= 0 && j >= 0) {
            if (a[i] == b[j]) {
                v.push_back({a[i], 2});
                i--;
                j--;
            }
            else if (a[i] > b[j]) {
                v.push_back({a[i], 0});
                i--;
            }
            else {
                v.push_back({b[j], 1});
                j--;
            }
        }
        else if (i >= 0) {
            v.push_back({a[i], 0});
            i--;
        }
        else {
            v.push_back({b[j], 1});
            j--;
        }
    }

    int ca = min(n, x);
    int cb = min(m, y);

    int ans;

    if (ca == n && cb == m) {
        ans = max(calc(v, n, m - 1), calc(v, n - 1, m));
    }
    else {
        ans = calc(v, ca, cb);
    }
   
    //final ans
    cout << ans << "\n";
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int testcases; //number of testcases
    cin >> testcases;

    while (testcases--){
        solve();
    }
    return 0;
}