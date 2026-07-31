// File: A_Anton_and_Danik.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin>>n;

    string s;
    cin>>s;

    int AntonC=0;
    int DanikC=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='A'){
            AntonC++;
        }else{
            DanikC++;
        }
    }
    if(AntonC>DanikC){
        cout<<"Anton"<<endl;
    }else if(AntonC<DanikC){
        cout<<"Danik"<<endl;
    }else{
        cout<<"Friendship"<<endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // int t; cin >> t; while (t--)
    solve();
    return 0;
}