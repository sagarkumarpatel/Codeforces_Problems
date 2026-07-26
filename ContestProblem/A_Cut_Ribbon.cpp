#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int answer = 0;

    for (int i = 0; i <= n / a; i++) {

        for (int j = 0; j <= n / b; j++) {

            int remaining = n - i * a - j * b;

            if (remaining >= 0 && remaining % c == 0) {
                answer = max(answer, i + j + remaining / c);
            }

        }
    }

    cout << answer << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}