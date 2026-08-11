// File: C_Quests.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int maxx=0;
    int sum=0;
    int ans=0;
    for(int i=0;i<min(n,k);i++){
        sum+=a[i];
        maxx=max(maxx,b[i]);
        ans=max(ans,sum+(k-i-1)*maxx);
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