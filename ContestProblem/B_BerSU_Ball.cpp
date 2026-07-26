#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> boys(n);
    for (int i = 0; i < n; i++) {
        cin >> boys[i];
    }
    
    int m;
    cin >> m;
    vector<int> girls(m);
    for (int i = 0; i < m; i++) {
        cin >> girls[i];
    }
    
    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());
    
    int pairs = 0;
    int i = 0, j = 0; // i for boys, j for girls
    
    while (i < n && j < m) {
        // If the difference is at most 1, we can form a pair
        if (abs(boys[i] - girls[j]) <= 1) {
            pairs++;
            i++;
            j++;
        }
        // If the boy's skill is less than the girl's skill, 
        // we need to look for a better boy (move to next boy)
        else if (boys[i] < girls[j]) {
            i++;
        }
        // If the girl's skill is less than the boy's skill,
        // we need to look for a better girl (move to next girl)
        else {
            j++;
        }
    }
    
    cout << pairs << endl;
    
    return 0;
}