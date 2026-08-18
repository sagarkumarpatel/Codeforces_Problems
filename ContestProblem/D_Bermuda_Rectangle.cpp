//first you have to think the logic then implement it
#include <bits/stdc++.h>
using namespace std;
#define int long long

void sagFun() {
    int S, q;
    cin >> S >> q;

    vector<int> di;

    for (int i = 1; i * i <= S; i++) {
        if (S % i == 0) {
            di.push_back(i);

            if (i * i != S)
                di.push_back(S / i);
        }
    }
   
    sort(di.begin(), di.end()); //sort the divs

    int n = di.size();

    vector<int> fixpre(n, 0);

    for (int i = 1; i < n; i++) {
        fixpre[i] = fixpre[i - 1]
                + (di[i] - di[i - 1]) * (S / di[i]);
    }

    while (q--) {
        int x, y;
        cin >> x >> y;

        int lmt = min(x, S);

        int m = upper_bound(di.begin(), di.end(), S / y)
                - di.begin() - 1;

        int p = upper_bound(di.begin(), di.end(), lmt)
                - di.begin() - 1;

        int fnl = y * min(lmt, di[m]);

        if (m < p)
            fnl += fixpre[p] - fixpre[m];

        if (p >= m && p < n - 1)
            fnl += (lmt - di[p]) * (S / di[p + 1]);

        cout << fnl << '\n';
    }
}

signed main() {
    int testcases;//number of testcases
    cin >> testcases;

    while (testcases--){
        sagFun();
    }
    return 0;
}