#include <bits/stdc++.h>
using namespace std;

void funSag() {
    int n;
    long long k;
    cin >> n >> k;

    vector<long long> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<long long> lftPre(n + 1, 0);

    for (int i = 0; i < n; i++) {
        lftPre[i + 1] = lftPre[i] + a[i];
    }

    vector<long long> occFreq(k, 0);
    long long otput = 0;

    for (int r = 1; r <= n; r++) {
        int indx = r - k - 1;

        if (indx >= 0) {
            long long rem = lftPre[indx] % k;
            occFreq[rem]++;
        }

        long long rem = lftPre[r] % k;
        otput += occFreq[rem];
    }

    cout << otput << '\n';
}

int main() {
    //it helps to make the input and output fast
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testcases;
    cin >> testcases;

    while (testcases--) {
        funSag();
    }

    return 0;
}