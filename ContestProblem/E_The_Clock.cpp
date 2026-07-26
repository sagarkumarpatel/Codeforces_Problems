#include <bits/stdc++.h>
using namespace std;

// Check if a time string is a palindrome
bool isPalindrome(string time) {
    return time[0] == time[4] && time[1] == time[3];
}

// Convert minutes to "HH:MM" format
string minutesToTime(int minutes) {
    int h = minutes / 60;
    int m = minutes % 60;
    char buffer[6];
    sprintf(buffer, "%02d:%02d", h, m);
    return string(buffer);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        int x;
        cin >> s >> x;
        
        // Convert start time to minutes
        int start = ((s[0] - '0') * 10 + (s[1] - '0')) * 60 + 
                    ((s[3] - '0') * 10 + (s[4] - '0'));
        
        set<string> palindromes;
        int current = start;
        
        // Keep checking until we return to start time
        do {
            string time = minutesToTime(current);
            if (isPalindrome(time)) {
                palindromes.insert(time);
            }
            current = (current + x) % 1440;
        } while (current != start);
        
        cout << palindromes.size() << "\n";
    }
    
    return 0;
}