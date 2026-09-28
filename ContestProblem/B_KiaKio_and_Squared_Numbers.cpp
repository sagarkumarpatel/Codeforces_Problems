#include <bits/stdc++.h>
using namespace std;

long long nxtVal(long long x) {
    long long ad = 0;

    while (x > 0) {
        long long digt = x % 10;
        ad += digt * digt;
        x /= 10;
    }

    return ad;
}

long long gtVal(long long x) {
    for (int i = 0; i < 200; i++) {
        x = nxtVal(x);
    }

    return x;
}

void funSag() {
    int n;
    cin >> n;

    map<long long, long long> occFre;

    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;

        long long val = gtVal(x);
        occFre[val]++;
    }

    long long finOut = 0;

    for (auto [val, cnt] : occFre) {
        finOut += cnt * (cnt - 1) / 2;
    }

    cout << finOut << '\n';
}

int main() {
    //for the fast input and output
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testcases;
    cin >> testcases;

    while (testcases--) {
        funSag();
    }

    return 0;
}