#include <bits/stdc++.h>
using namespace std;
#define int long long

void push() {
    int n, m;
    cin >> n >> m;

    unordered_set<char> chars;

    // Store the first character of every normal word
    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;

        chars.insert(toupper(word[0]));
    }

    vector<string> abbr(m);

    for (int i = 0; i < m; i++)
        cin >> abbr[i];

    vector<bool> dn(m, false); //done
    int cnt = 0; //count 

    while (true) {
        bool fnd = false;

        for (int i = 0; i < m; i++) {
            if (dn[i])
                continue;

            bool isPos = true;

            for (char ch : abbr[i]) {
                if (chars.find(ch) == chars.end()) {
                    isPos = false;
                    break;
                }
            }

            if (isPos) {
                dn[i] = true;
                cnt++;
                fnd = true;

                // First letter abbreviation becomes available
                chars.insert(abbr[i][0]);
            }
        }

        if (!fnd){
            break;
        }
    }

    if (cnt == m){
        cout << "YES\n";
    }
    else
        cout << "NO\n";
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int testcases; //number of testcases
    cin >> testcases;

    while (testcases--){
        push();
    }
    return 0;
}