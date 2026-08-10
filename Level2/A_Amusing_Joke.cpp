// File: A_Amusing_Joke.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    string s3;
    cin>>s3;

    string res=s1+s2;
    sort(res.begin(),res.end());
    sort(s3.begin(),s3.end());
    if(res==s3){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // int t; cin >> t; while (t--)
    solve();
    return 0;
}