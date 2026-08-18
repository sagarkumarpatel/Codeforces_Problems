#include <bits/stdc++.h>
using namespace std;
#define int long long

void push() {
    int n, m;
    cin >> n >> m; //taking input as n and m

    vector<int> NUMS1(n);
    for (int i = 0; i < n; i++){
        cin >> NUMS1[i];
    }

    vector<int> NUMS2(m);
    for (int i = 0; i < m; i++){
        cin >> NUMS2[i];
    }

    int be = NUMS1[0] + n - 1;
    int ve = NUMS2[0] + m - 1;

    if (ve <= be)
        cout << 1 <<endl;
    else
        cout << 2 << '\n';
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int testcases;
    cin >> testcases; //number of testcases

    while (testcases--){
        push();
    }
    return 0;
}