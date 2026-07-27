// File: B_Square_Difference.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long


bool isPrime(int n){
    //  if(n==2) return true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
}
return true;
}
void solve() {
    int ali,bob;
    cin>>ali>>bob;

    if((ali-bob)==1 && isPrime(ali+bob)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--)
    solve();
    return 0;
}