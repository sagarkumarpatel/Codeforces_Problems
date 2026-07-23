// File: A_Nearly_Lucky_Number.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin>>n;
    
    int count=0;
    while(n!=0){
        int rem=n%10;
        if(rem==4 || rem==7){
            count++;
        }
        n/=10;
    }
    if(count==4 || count==7){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // int t; cin >> t; while (t--)
    solve();
    return 0;
}