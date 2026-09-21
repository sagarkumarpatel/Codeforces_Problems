#include <bits/stdc++.h>
using namespace std;

void myFunSag() {
    int n, k;
    cin >> n >> k;

    if (k < n || k > 2 * n - 1) { //if not satisfied then
        cout << -1 << '\n';
        return;
    }

    int end = 2 * n - k;

    vector<vector<int>> con(n, vector<int>(n, 0));
    int vl = 1;

    for (int i = 0; i < end; i++) {
        con[i][i] = vl++;
    }

    for (int i = end; i < n; i++) {
        con[i][0] = vl++;
    }

    for (int j = end; j < n; j++) {
        con[0][j] = vl++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (con[i][j] == 0) {
                con[i][j] = vl++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << con[i][j];

            if (j + 1 < n) {
                cout << ' ';
            }
        }
        cout << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testcases;
    cin >> testcases;

    while (testcases--) {
        myFunSag();
    }

    return 0;
}