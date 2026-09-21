#include <bits/stdc++.h>
using namespace std;

void myFunSag() {
    int n;
    cin >> n;

    vector<int> con(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> con[i];
    }

    vector<int> sub(n + 1, 0);

    for (long long i = 1; i <= n; i++) {
        long long st = con[i] * i;
        long long ed = st + i - 1;

        if (st < n) {
            sub[st]++;

            if (ed + 1 < n) {
                sub[ed + 1]--;
            }
        }
    }

    vector<int> otp;
    int blk = 0;

    for (int i = 0; i < n; i++) {
        blk += sub[i];

        if (blk == 0) {
            otp.push_back(i);
        }
    }

    cout << otp.size() << '\n';

    for (int i = 0; i < otp.size(); i++) {
        cout << otp[i];

        if (i + 1 < otp.size()) {
            cout << ' ';
        }
    }

    cout << '\n';
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