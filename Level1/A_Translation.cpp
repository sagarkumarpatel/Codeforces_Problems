// File: A_Translation.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    string s,t;
    cin>>s>>t;

    string res=reverse(t.begin(),t.end());
    if(s==res){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // int t; cin >> t; while (t--)
    solve();
    return 0;
}