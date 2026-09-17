#include <bits/stdc++.h>
using namespace std;

void funSag() {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> ons;

    for (int i = 0; i < n; i++) {
        cin >> a[i];

        if (a[i] == 1) {
            ons.push_back(i);
        }
    }

    vector<int> ponts;
    ponts.push_back(-1);

    for (int pos : ons) {
        ponts.push_back(pos);
    }

    ponts.push_back(n);

    int bstLen = 0;
    int st = -1;
    int ed = -1;

    for (int i = 0; i + 1 < ponts.size(); i++) {
        int start = ponts[i];
        int end = ponts[i + 1];

        int frst = -1;
        int lst = -1;

        if (start >= 0) {
            frst = start;
            lst = start;
        }

        for (int j = start + 1; j < end; j++) {
            if (a[j] == -1) {
                if (frst == -1) {
                    frst = j;
                }
                lst = j;
            }
        }

        if (end < n) {
            if (frst == -1) {
                frst = end;
            }
            lst = end;
        }

        if (frst != -1) {
            int len = lst - frst + 1;

            if (len > bstLen) {
                bstLen = len;
                st = frst;
                ed = lst;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (a[i] == -1) {
            if (i == st || i == ed) {
                a[i] = 1;
            } else {
                a[i] = 0;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << a[i];

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