#include <bits/stdc++.h>
using namespace std;

void funSag() {
    int x, b;
    cin >> x >> b;

    if (x <= b) {
        cout << -1 << '\n';
    } else {
        cout << min(b, x - b) << '\n'; //taking the min of the b and diff of x-b
    }
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