// File: A_Panoramix_s_Prediction.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long
 
bool isPrime(int m){

    for(int i=2;i*i<=m;i++){
        if(m%i==0){
            return false;
        }
    }
    return true;
}
void solve() {
    int n,m;
    cin>>n>>m;
for(int i=n+1;i<=m;i++){
     if(isPrime(i)){
        if(i==m){
            cout<<"YES";
            return;
        }else{
            cout<<"NO";
            return;
        }
     }
}
cout<<"NO";
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // int t; cin >> t; while (t--)
    solve();
    return 0;
}