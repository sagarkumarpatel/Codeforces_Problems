#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    // Create an n x n table initialized with 1s. 
    // This automatically satisfies the rule for the first row and column.
    vector<vector<int>> a(n, vector<int>(n, 1));

    // Fill the remaining cells using the given formula
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < n; ++j) {
            a[i][j] = a[i - 1][j] + a[i][j - 1];
        }
    }

    // The maximum value is always at the last cell
    cout << a[n - 1][n - 1] << "\n";

    return 0;
}