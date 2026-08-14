// File: B_Drinks.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin>>n;
    double sum=0.0;
    for(int i=1;i<=n;i++){
        int num;
        cin>>num;
        sum+=num;
    }
    cout<<fixed<<setprecision(12)<<sum/n<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // int t; cin >> t; while (t--)
    solve();
    return 0;
}