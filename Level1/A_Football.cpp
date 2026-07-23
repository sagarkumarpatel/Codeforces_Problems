//  Football - **96A** 
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    string s;
     cin>>s;

    int count=1;
    bool flag=false;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]){
            count++;

            if(count>=7){
                cout<<"YES";
                flag=true;
                break;
            }
        }else{
            count=1;
        }
    }
    if(flag==false){
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