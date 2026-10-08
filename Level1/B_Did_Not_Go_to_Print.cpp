#include <bits/stdc++.h>
using namespace std;

void funSag() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> bgn;
    vector<bool> drw(n + 1, false);

    for (int i = 0; i < n; i++) {
        int unqk = i + 1;

        if (s[i] == '1') {
            bgn.push_back(unqk);
        }
        else if (s[i] == '2') {
            if (!bgn.empty()) {
                drw[bgn.back()] = true;
                bgn.pop_back();
            }
            else {
                drw[unqk] = true;
            }
        }
        else {
            drw[unqk] = true;
        }
    }

    vector<int> baye;

    for (int i = 1; i <= n; i++) {
        if (!drw[i]) {
            baye.push_back(i);
        }
    }

    cout << baye.size() << '\n';

    for (int i = 0; i < baye.size(); i++) {
        cout << baye[i];

        if (i + 1 < baye.size()) {
            cout << ' ';
        }
    }

    cout << '\n';
}

int main() {
    //number of testcases
    int testcases;
    cin >> testcases;

    while (testcases--) {
        funSag();
    }

    return 0;
}