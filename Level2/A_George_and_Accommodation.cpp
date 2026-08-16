// File: A_George_and_Accommodation.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin>>n;

    int move=0;
    for(int i=0;i<n;i++){
        int p,q;
        cin>>p>>q;
        if(p<q-1){
            move++;
        }
    }
    cout<<move<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // int t; cin >> t; while (t--)
    solve();
    return 0;
}