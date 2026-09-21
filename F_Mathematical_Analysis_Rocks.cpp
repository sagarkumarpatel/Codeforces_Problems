#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<int> arr1(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> arr1[i];
    }

    vector<int> arr2(n + 1);
    for (int i = 1; i <= n; ++i) {
        int b;
        cin >> b;
        // The best friend of the person who has the notebook on day 3 
        // is the person who receives it on day 4.
        arr2[arr1[i]] = b;
    }

    // Print the resulting best friends array
    for (int i = 1; i <= n; ++i) {
        cout << arr2[i] << (i == n ? "" : " ");
    }
    cout << "\n";

    return 0;
}