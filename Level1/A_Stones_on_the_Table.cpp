#include <bits/stdc++.h>

using namespace std;

#define int long long

#define endl '\n'

 

void push(){
int  n;
cin>>n;

string s;
cin>>s;

int count=0;
for(int i=0;i<(int)s.size()-1;i++){
     if(s[i]==s[i+1]){
         count++;
     }
}
cout<<count<<endl;

}

signed main(){

    ios_base::sync_with_stdio(0);

    cin.tie(0);cout.tie(0);

    // int t;cin>>t;while(t--)

    push();

    return 0;

}