// File: A_Co_prime_Array.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin>>n;
    vector<int>nums(n);
    vector<int>check(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
        check[i]=0;
    }
    int k=0;
    for(int i=0;i<n-1;i++){
        if(__gcd(nums[i],nums[i+1])!=1){
            k++;
            check[i]=1;
        }
    }
    cout<<k<<endl;
    for(int i=0;i<n;i++){
      cout<<nums[i]<<" ";
      if(check[i]==1){
        cout<<"1"<<" ";
      }
    }
    cout<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // int t; cin >> t; while (t--)
    solve();
    return 0;
}