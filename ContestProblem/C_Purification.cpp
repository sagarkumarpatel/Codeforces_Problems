#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<string> grid(n);
    vector<bool> row_ok(n, false);
    vector<bool> col_ok(n, false);

    for (int i = 0; i < n; ++i) {
        cin >> grid[i];
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] == '.') {
                row_ok[i] = true;
                col_ok[j] = true;
            }
        }
    }

    bool all_rows = true;
    for (int i = 0; i < n; ++i) {
        if (!row_ok[i]) all_rows = false;
    }

    bool all_cols = true;
    for (int j = 0; j < n; ++j) {
        if (!col_ok[j]) all_cols = false;
    }

    if (all_rows) {
        cout << n << "\n";
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == '.') {
                    cout << i + 1 << " " << j + 1 << "\n";
                    break;
                }
            }
        }
    } else if (all_cols) {
        cout << n << "\n";
        for (int j = 0; j < n; ++j) {
            for (int i = 0; i < n; ++i) {
                if (grid[i][j] == '.') {
                    cout << i + 1 << " " << j + 1 << "\n";
                    break;
                }
            }
        }
    } else {
        cout << -1 << "\n";
    }

    return 0;
}