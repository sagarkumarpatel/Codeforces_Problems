#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    long long k;
    cin >> n >> k;
    
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());
    
    int mid = n / 2;
    
    // Prefix sum for O(1) range sum queries
    vector<long long> prefix(n + 1, 0);
    for (int i = 0; i < n; i++) {
        prefix[i + 1] = prefix[i] + a[i];
    }
    
    long long low = a[mid];
    long long high = 2e9;
    long long ans = a[mid];
    
    while (low <= high) {
        long long target = low + (high - low) / 2;
        
        // Find first index where a[i] >= target
        int pos = lower_bound(a.begin() + mid, a.end(), target) - a.begin();
        
        // Number of elements to increase
        long long count = pos - mid;
        
        // Sum of elements from mid to pos-1
        long long sum = prefix[pos] - prefix[mid];
        
        // Total operations needed
        long long ops = count * target - sum;
        
        if (ops <= k) {
            ans = target;
            low = target + 1;
        } else {
            high = target - 1;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}