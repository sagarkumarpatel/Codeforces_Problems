// File: A_Marathon.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int a;
    cin>>a;
    int count=0;
    for(int i=0;i<3;i++){
       int num;
       cin>>num;
       if(num>a){
        count++;
       }
    }
    cout<<count<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--)
    solve();
    return 0;
}