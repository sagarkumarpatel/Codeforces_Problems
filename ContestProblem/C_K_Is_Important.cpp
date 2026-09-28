
#include <bits/stdc++.h>
using namespace std;

void funSag() {
    int n, k;
    cin >> n >> k;

    vector<long long> a(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    int totl = n - k + 1;
    long long finOut = 0;

    for (int stp = 1; stp <= totl; stp++) {
        int lft = n - k + 2 - stp;
        int rght = k - 1 + stp;

        int etc = n - 2 * k + 3 - stp;

        if (etc >= 1 && etc <= totl) {
            if (stp < etc) {
                finOut += a[lft] + a[rght];
            }
            else if (stp == etc) {
                finOut += a[lft];
            }
        }
        else {
            finOut += max(a[lft], a[rght]);
        }
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

