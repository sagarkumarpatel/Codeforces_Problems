// File: A_Add_Odd_or_Subtract_Even.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int a,b;
    cin>>a>>b;
    if(a<b){
        if((b-a)%2==1){
            cout<<1<<endl;
        }else
       cout<<2<<endl;
    }else if(a==b){
        cout<<"0"<<endl;
    }else{
        if((a-b)%2==0){
            cout<<1<<endl;
        }else
        cout<<2<<endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--)
    solve();
    return 0;
}