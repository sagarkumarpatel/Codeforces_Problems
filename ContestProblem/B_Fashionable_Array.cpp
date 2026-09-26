#include <bits/stdc++.h>
using namespace std;

void funSag() {
    int n;
    cin >> n;

    map<int, int> occrence;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        occrence[x]++;
    }

    vector<int> valNums;

    for (auto it : occrence) {
        valNums.push_back(it.first);
    }

    sort(valNums.rbegin(), valNums.rend());

    vector<int> finalOut;

    for (int rnd = 1; rnd <= n; rnd++) {
        bool found = false;

        for (int x : valNums) {
            if (occrence[x] >= rnd) {
                finalOut.push_back(x);
                found = true;
            }
        }

        if (!found) {
            break;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << finalOut[i];

        if (i + 1 < n) {
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
        funSag();
    }

    return 0;
}