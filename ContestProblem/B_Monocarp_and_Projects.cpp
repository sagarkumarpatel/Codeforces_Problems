#include <bits/stdc++.h>
using namespace std;

void myFunsag() {
    long long x, y, k;
    cin >> x >> y >> k;

    long long mins = y - x;
    long long outp = 0;

    long long fin = min(x + k - 1, mins);

    for (long long i = x; i <= fin; i++) {
        outp += mins % i;
    }

    if (x + k - 1 > mins) {
        long long cnt = (x + k - 1) - max(x, mins + 1) + 1;

        if (cnt > 0) {
            outp += cnt * mins;
        }
    }

    cout << outp << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testcases;
    cin >> testcases;

    while (testcases--) {
        myFunsag();
    }

    return 0;
}