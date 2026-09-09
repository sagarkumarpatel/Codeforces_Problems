#include <bits/stdc++.h>
using namespace std;

void myFun() {
    int n;
    cin >> n;

    vector<int> a(n);
    int zrs = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];

        if (a[i] == 0) {
            zrs++;
        }
    }

    if (zrs < 2) {
        cout << -1 << '\n';
        return;
    }

    int outpt = a[0] + a[n - 1];
    cout << outpt << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testcases;
    cin >> testcases; //numbere of test cases

    while (testcases--) {
        myFun();
    }

    return 0;
}