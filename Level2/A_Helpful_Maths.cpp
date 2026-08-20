// File: A_Helpful_Maths.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    string s;
    cin >> s;
    
    vector<char> nums;
    // Extract the digits (even indices: 0, 2, 4, ...)
    for (int i = 0; i < s.length(); i += 2) {
        nums.push_back(s[i]);
    }
    
    // Sort the numbers
    sort(nums.begin(), nums.end());
    
    // Print the sorted numbers separated by '+'
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i];
        if (i + 1 < nums.size()) {
            cout << "+";
        }
    }
    cout << endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // int t; cin >> t; while (t--)
    solve();
    return 0;
}