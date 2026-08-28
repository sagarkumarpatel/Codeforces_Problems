#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<int> h(n), a(n);
    for (int i = 0; i < n; ++i) {
        cin >> h[i] >> a[i];
    }

    int count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i != j) {
                // If host team i's home color matches guest team j's guest color
                if (h[i] == a[j]) {
                    count++;
                }
            }
        }
    }

    cout << count << "\n";

    return 0;
}