#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> answer;

    int placeValue = 1;

    while (n > 0) {

        int digit = n % 10;

        if (digit != 0) {
            answer.push_back(digit * placeValue);
        }

        n /= 10;
        placeValue *= 10;
    }

    cout << answer.size() << "\n";

    for (int value : answer) {
        cout << value << " ";
    }

    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}