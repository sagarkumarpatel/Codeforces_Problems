// File: C_Where_s_the_Bishop.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    vector<string> board(8);
        for (int i = 0; i < 8; i++) {
            cin >> board[i];
        }
        
        for (int i = 1; i <= 6; i++) {
            for (int j = 1; j <= 6; j++) {
                if (board[i][j] == '#') {
                    // Check if all four diagonal positions are '#'
                    if (board[i-1][j-1] == '#' && board[i-1][j+1] == '#' &&
                        board[i+1][j-1] == '#' && board[i+1][j+1] == '#') {
                        cout << i + 1 << " " << j + 1 << "\n";
                        break;
                    }
                }
            }
        }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--)
    solve();
    return 0;
}