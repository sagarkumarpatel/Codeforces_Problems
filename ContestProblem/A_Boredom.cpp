#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    if (!(cin >> n)) return 0;
    const int MAX_VAL = 100005;
    
    vector<long long> count(MAX_VAL, 0);//it store the count
    vector<long long> dp(MAX_VAL, 0);
 
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        count[num]++;
    }
 
    // Base cases
    dp[0] = 0;
    dp[1] = count[1] * 1;
 
    for (int i = 2; i < MAX_VAL; i++) {
        long long skip_current = dp[i - 1];
        long long take_current = dp[i - 2] + (count[i] * i);
        
        dp[i] = max(skip_current, take_current);
    }
    cout << dp[MAX_VAL - 1] << "\n";
 
    return 0;
}