// File: A_I_Wanna_Be_the_Guy.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    unordered_set<int>s;
    int n;
    cin>>n;

    int p;
    cin>>p;
    for(int i=0;i<p;i++){
        int x;
        cin>>x;
        s.insert(x);
    }

    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int y;
        cin>>y;
        s.insert(y);
    }

    if(s.size()==n){
        cout<<"I become the guy."<<endl;
    }else{
        cout<<"Oh, my keyboard!"<<endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // int t; cin >> t; while (t--)
    solve();
    return 0;
}