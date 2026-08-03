// File: A_Magnets.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin>>n;
    int group=0;
    string prev="";
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(s!=prev){
            group++;
            prev=s;
        }
}
cout<<group<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // int t; cin >> t; while (t--)
    solve();
    return 0;
}