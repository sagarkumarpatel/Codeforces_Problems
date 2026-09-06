// File: A_Moo_Language_School.cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

void push() {
     int n, k;
    cin >> n >> k;

    string lng;
    cin >> lng;

    int cst = 0;

    for (int i = 0; i < n; i += k) {//outer loop
        bool vd = true;
      //inner loop 
        for (int j = i; j < i + k; j++) {
            if (lng[j] == '0') {
                vd = false;
                break;
            }
        }

        if (vd) {
            cst++;
        }
    }

    cout << cst << '\n';
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int testcases; 
    cin >> testcases;//taking input of number of testcases
     while (testcases--){
         push();
     }
    return 0;
}