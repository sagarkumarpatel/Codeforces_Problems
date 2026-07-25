#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n == 2 || n == 3) {
            cout << -1 << '\n';
            continue;
        }

        for (int i = n - 1; i >= 1; i -= 2)
            cout << i << " ";

        for (int i = n; i >= 2; i -= 2)
            cout << i << " ";

        cout << '\n';
    }

    return 0;
}