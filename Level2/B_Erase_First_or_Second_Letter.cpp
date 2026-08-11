// File: B_Erase_First_or_Second_Letter.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char,int>mp;
    int count=0;
    vector<int>dis(n,0);
    for(int i=0;i<n;i++){
        mp[s[i]]++;
        if(mp[s[i]]==1){
            count++;
        }
        dis[i]=count;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans+=dis[i];
    }
    cout<<ans<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--)
    solve();
    return 0;
}