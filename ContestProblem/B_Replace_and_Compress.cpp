#include<bits/stdc++.h>
using namespace std;

void funSag() {
    string stng;
    cin >> stng;

    int n = stng.size();
    int m = 1;

    for (int i = 1; i < n; i++) {
        if (stng[i] != stng[i - 1]) {
            m++;
        }
    }

    bool aageSeSmall = false, aageSeBig = false;

    for (int i = 1; i < n - 1; i++) {
        if (stng[i - 1] == stng[i + 1]) {
            if (stng[i] == stng[i - 1]) {
                aageSeSmall = true;
            } else {
                aageSeBig = true;
            }
        }
    }

    int outpt = 1;

    if (aageSeSmall) {
        outpt++;
    }

    if (aageSeBig && m - 2 >= 1) {
        outpt++;
    }

    cout << outpt << '\n';
}

int main() {
    //it helps to take the input and the output fast
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testcases;
    cin >> testcases;

    while (testcases--) {
        funSag();
    }

    return 0;
}