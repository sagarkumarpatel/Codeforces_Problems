#include <bits/stdc++.h>
using namespace std;
#define int long long

const int MOD = 998244353;
const int MAX = 1000005;

int fact[MAX], invFact[MAX];

int pow(int a, int b) {
    int ans = 1;

    while (b > 0) {
        if (b & 1)
            ans = ans * a % MOD;

        a = a * a % MOD;
        b /= 2;
    }

    return ans;
}

void preC() {
    fact[0] = 1;

    for (int i = 1; i < MAX; i++)
        fact[i] = fact[i - 1] * i % MOD;

    invFact[MAX - 1] = pow(fact[MAX - 1], MOD - 2);

    for (int i = MAX - 2; i >= 0; i--)
        invFact[i] = invFact[i + 1] * (i + 1) % MOD;
}

int nCr(int n, int r) {
    if (r < 0 || r > n)
        return 0;

    return fact[n] * invFact[r] % MOD * invFact[n - r] % MOD;
}

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int cnt0 = 0, cnt1 = 0;
    int blk0 = 0, blocks1 = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            cnt0++;

            if (i == 0 || s[i - 1] != '0')
                blk0++;
        }
        else {
            cnt1++;

            if (i == 0 || s[i - 1] != '1')
                blocks1++;
        }
    }

    int ways0 = 1;
    int ways1 = 1;

    if (blk0 > 0)
        ways0 = nCr(cnt0 - 1, blk0 - 1);

    if (blocks1 > 0)
        ways1 = nCr(cnt1 - 1, blocks1 - 1);

    int ans = ways0 * ways1 % MOD;
    cout << ans << '\n';
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    preC();
    //number of testcases
    int testcases; cin >> testcases;
    while (testcases--){
        solve();
    }
    return 0;
}