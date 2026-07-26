// File: B_String_Construction.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, k;
    cin >> n >> k;
    
    int cnt0 = n / 2;
    int cnt1 = n - cnt0;
    
    int runs = n - k;
    
    if (runs < 2 || runs > n) {
        cout << -1 << "\n";
        return;
    }
    
    int runs0 = runs / 2;
    int runs1 = runs - runs0;
    
    if (cnt0 < runs0 || cnt1 < runs1) {
        cout << -1 << "\n";
        return;
    }
    
    vector<int> dist0(runs0, 1);
    vector<int> dist1(runs1, 1);
    
    cnt0 -= runs0;
    cnt1 -= runs1;
    
    for (int i = 0; i < runs0 && cnt0 > 0; i++) {
        int add = min(cnt0, 1000000LL);
        dist0[i] += add;
        cnt0 -= add;
    }
    
    for (int i = 0; i < runs1 && cnt1 > 0; i++) {
        int add = min(cnt1, 1000000LL);
        dist1[i] += add;
        cnt1 -= add;
    }
    
    string s = "";
    
    if (runs0 >= runs1) {
        for (int i = 0; i < runs; i++) {
            if (i % 2 == 0) {
                s += string(dist0[i/2], '0');
            } else {
                s += string(dist1[i/2], '1');
            }
        }
    } else {
        for (int i = 0; i < runs; i++) {
            if (i % 2 == 0) {
                s += string(dist1[i/2], '1');
            } else {
                s += string(dist0[i/2], '0');
            }
        }
    }
    
    int actual_k = 0;
    int zeros = 0, ones = 0;
    
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') zeros++;
        else ones++;
        if (i < n - 1 && s[i] == s[i+1]) actual_k++;
    }
    
    if (actual_k == k && abs(zeros - ones) <= 1 && s.length() == n) {
        cout << s << "\n";
    } else {
        cout << -1 << "\n";
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    int t; 
    cin >> t; 
    while (t--)
        solve();
    return 0;
}