#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s;
    cin >> s;

    map<string, int> counts;
    string best_twogram = "";
    int max_count = 0;

    // Iterate through all adjacent pairs
    for (int i = 0; i < n - 1; i++) {
        string twogram = s.substr(i, 2);
        counts[twogram]++;
        
        // Track the one with the maximum frequency
        if (counts[twogram] > max_count) {
            max_count = counts[twogram];
            best_twogram = twogram;
        }
    }

    cout << best_twogram << "\n";

    return 0;
}