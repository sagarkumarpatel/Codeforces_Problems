// File: A_Pangram.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    unordered_set<char> unique_letters;
    for (char c : s) {
        unique_letters.insert(tolower(c));
    }
    
    if (unique_letters.size() == 26) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
}
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // int t; cin >> t; while (t--)
    solve();
    return 0;
}