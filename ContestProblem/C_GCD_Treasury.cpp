#include <bits/stdc++.h>
using namespace std;
//cal the gcd of the two number
long long calGcd(long long a, long long b) {
    while (b) {
        long long temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

void funSag() {
    int n;
    long long x;
    cin >> n >> x;

    vector<long long> cont(n);

    for (int i = 0; i < n; i++) {
        cin >> cont[i];
    }

    if (x <= 1) {
        cout << 0 << '\n';
        return;
    }

    vector<long long> cross;

    for (long long i = 1; i * i <= x; i++) {
        if (x % i == 0) {
            cross.push_back(i);

            if (i * i != x) {
                cross.push_back(x / i);
            }
        }
    }

    sort(cross.begin(), cross.end());

    vector<long long> addingSum(cross.size(), 0);

    for (int i = 0; i < n; i++) {
        long long g = calGcd(cont[i], x);

        if (g > 1) {
            int pos = lower_bound(cross.begin(), cross.end(), g) - cross.begin();
            addingSum[pos] += cont[i];
        }
    }

    long long fnlOut = 0;
    //calculating the final output
    for (int i = 0; i < cross.size(); i++) {
        long long d = cross[i];

        if (d <= 1) {
            continue;
        }

        long long total = 0;
        long long g = 0;

        for (int j = 0; j < cross.size(); j++) {
            if (cross[j] % d == 0 && addingSum[j] > 0) {
                total += addingSum[j];
                g = calGcd(g, cross[j]);
            }
        }

        if (g == d) {
            fnlOut = max(fnlOut, total);
        }
    }

    cout << fnlOut << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testcases;
    cin >> testcases;

    while (testcases--) {
        funSag();
    }

    return 0;
}