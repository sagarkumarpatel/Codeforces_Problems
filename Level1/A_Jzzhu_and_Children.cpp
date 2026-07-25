// File: A_Jzzhu_and_Children.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n,m;
    cin>>n>>m;

    queue<pair<int,int>>q;
    for(int i=1;i<=n;i++){
        int num;
        cin>>num;
        q.push({i,num});
    }
    while(q.size()>1){
       
        int idx=q.front().first;
        int val=q.front().second;
        q.pop();
        if(val<=m){
            continue;
        }else{
            val=val-m;
            q.push({idx,val});
        }
    }
    cout<<q.front().first<<endl;

}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // int t; cin >> t; while (t--)
    solve();
    return 0;
}