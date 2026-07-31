// File: A_Vanya_and_Fence.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n,h;
    cin>>n>>h;
    
    int count=0;
    for(int i=0;i<n;i++){
        int height;
        cin>>height;
        if(height>h){
          count+=2;
        }else{
            count++;
        }
    }
    cout<<count<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // int t; cin >> t; while (t--)
    solve();
    return 0;
}