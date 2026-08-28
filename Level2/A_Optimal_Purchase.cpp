#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    long long n, a, b;
    cin >> n >> a >> b;

    long long full_groups = n / 3;
    long long rem = n % 3;

    // Cost of handling groups of 3 using either group keys or individual keys
    long long cost_per_group = min(3 * a, b);
    long long total_cost = full_groups * cost_per_group;

    if (rem == 1) {
        // For 1 remaining student, we can either use 1 individual key (a) 
        // or upgrade to a group key if we didn't use the optimal block choice, 
        // or add a group key instead of individual keys.
        long long option1 = a;
        long long option2 = b; // buying a full group key for 1 student
        total_cost += min(option1, option2);
    } else if (rem == 2) {
        // For 2 remaining students, we can use 2 individual keys (2 * a) 
        // or 1 group key (b).
        long long option1 = 2 * a;
        long long option2 = b;
        total_cost += min(option1, option2);
    }

    // Also, consider if it's cheaper to just buy (full_groups + 1) group keys entirely
    // instead of mixing blocks, which handles cases where group keys are heavily discounted.
    long long all_group_cost = (full_groups + (rem > 0 ? 1 : 0)) * b;
    
    // In fact, with min(3*a, b) for full groups, we just need to compare 
    // the remainder options properly. Let's write the exact robust formula:
    
    long long ans = (n / 3) * min(3 * a, b);
    long long left = n % 3;
    
    if (left == 1) {
        ans += min({a, b, min(3 * a, b)}); // wait, if left=1, cost is min(a, b)
    } else if (left == 2) {
        ans += min({2 * a, b});
    }
    
    // Edge comparison: what if we over-purchase by using an extra group key for the whole thing?
    long long alt = ((n + 2) / 3) * b;
    
    cout << min(ans, alt) << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}