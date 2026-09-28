#include <bits/stdc++.h>
using namespace std;

void funSag() {
    long long n, k;
    cin >> n >> k;

    long long finOut = (1LL << (n - k + 1)) + 2 * (k - 1);

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