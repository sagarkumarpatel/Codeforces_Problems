// File: A_Odd_Divisor.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin>>n;
  while(n%2==0){
    n/=2;
  }
  if(n!=1){
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