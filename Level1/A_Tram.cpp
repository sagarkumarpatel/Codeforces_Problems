// File: A_Tram.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin>>n;
    
    int maxExist=0;
    int intrain=0;
    for(int i=1;i<=n;i++){
        int exit,enter;
        cin>>exit>>enter;
        if(exit==0){
            intrain+=enter;
        }else{
        intrain-=exit;
        intrain+=enter;
        }
        maxExist=max(maxExist,intrain);
    }
    cout<<maxExist<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // int t; cin >> t; while (t--)
    solve();
    return 0;
}