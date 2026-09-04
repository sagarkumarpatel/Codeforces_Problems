#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    int max_len = 1;
    int current_len = 1;
    
    int prev;
    cin >> prev;

    for (int i = 1; i < n; ++i) {
        int current;
        cin >> current;
        
        if (current > prev) {
            current_len++;
        } else {
            current_len = 1;
        }
        max_len = max(max_len, current_len);
        prev = current;
    }

    cout << max_len << "\n";
    return 0;
}