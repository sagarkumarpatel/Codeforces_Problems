// File: A_Is_your_horseshoe_on_the_other_hoof.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    unordered_set<int>s;
    for(int i=0;i<4;i++){
        int num;
        cin>>num;
        s.insert(num);
    }
    cout<<4-s.size()<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // int t; cin >> t; while (t--)
    solve();
    return 0;
}