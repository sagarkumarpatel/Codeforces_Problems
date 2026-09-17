// File: B_Minus_Two.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void funSag() {
    int n;
    cin>>n;
   map<int, int> cntFeq;
    int max_cntFeq = 0, odd = 0, cnt4 = 0, cnt2 = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        max_cntFeq = max(max_cntFeq, ++cntFeq[x]);
        if (x % 2 != 0) odd++;
        else if (x % 4 == 0) cnt4++;
        else cnt2++;
    }

    cout << max({max_cntFeq, odd, cnt4, cnt2}) << "\n";
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int testcase; cin >> testcase; while (testcase--)
    funSag();
    return 0;
}