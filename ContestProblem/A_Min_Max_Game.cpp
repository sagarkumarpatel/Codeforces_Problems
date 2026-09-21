// File: A_Min_Max_Game.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void myFunSag() {
     int n;
    cin >> n;

    int os = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x == 1) {
            os++;
        }
    }

    int trns = (n - 1) / 2;

    if (os > trns) {
        cout << "Bessie\n";
    } else {
        cout << "Elsie\n";
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int testcases;
    cin >> testcases; 
    while (testcases--){
        myFunSag();
    }
    return 0;
}