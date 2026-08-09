// File: B_Subtract_Operation.cpp
//pushing the code in github
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    map<int,bool>mp;
    for(auto it:v){
        mp[it]=true;
    }
    for(int i=0;i<n;i++){
        if(mp.find(v[i]-k)!=mp.end()){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--)
    solve();
    return 0;
}