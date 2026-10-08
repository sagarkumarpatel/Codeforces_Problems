#include <bits/stdc++.h>
using namespace std;

void funSag() {
    int x, y, r;
    cin >> x >> y >> r;

    for (int i = 0; i <= r; i++) {
        int mer = r * r - i * i;
        int s = round(sqrt(mer));
        int mul=s*s;
        if (mul == mer) {
            cout << x + i << " " << y + s << '\n';
            return;
        }
    }
}

int main() {
    //the number of testcases
    int testcases;
    cin >> testcases;

    while (testcases--) {
        funSag();
    }

    return 0;
}