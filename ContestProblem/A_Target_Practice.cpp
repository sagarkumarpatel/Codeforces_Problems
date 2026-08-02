// File: A_Target_Practice.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int total_score = 0;
    // The grid is always 10x10
    for (int i = 0; i < 10; ++i) {
        string row;
        cin >> row;
        for (int j = 0; j < 10; ++j) {
            if (row[j] == 'X') {
                // Calculate the score based on the distance to the nearest edge
                int points = min({i, 9 - i, j, 9 - j}) + 1;
                total_score += points;
            }
        }
    }
    cout << total_score << "\n"; //total score 
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--)
    solve();
    return 0;
}