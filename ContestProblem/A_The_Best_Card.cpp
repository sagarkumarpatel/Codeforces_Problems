#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 200005;
vector<bool> allPrime(N, true);

void sive() {
    allPrime[0] = allPrime[1] = false;

    for (int i = 2; i * i < N; i++) {
        if (allPrime[i]) {
            for (int j = i * i; j < N; j += i)
                allPrime[j] = false;
        }
    }
}

void solve() {
    int n; //number of cards in the game
    cin >> n;

    if (allPrime[n + 1])
        cout << "YES\n";
    else
        cout << "NO\n";
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    sive();

    int testCases;
    cin >> testCases;

    while (testCases--)
        solve();

    return 0;
}