// File: B_Kalindrome_Array.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin>>n;
    if(n<=2){
        cout<<"YES"<<endl;
        return;
    }
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    int oddC=0;
    int evenC=0;
    for(int num:nums){
        if(num%2==0){
            evenC++;
        }else{
            oddC++;
        }
    }
    if((oddC+1==evenC) || (evenC+1==oddC)){
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