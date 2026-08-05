#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool firstWord = true;
    int i = 0;

    while (i < s.length()) {

        // If "WUB" starts here
        if (i + 2 < s.length() && s.substr(i, 3) == "WUB") {

            // Skip all consecutive WUB
            while (i + 2 < s.length() && s.substr(i, 3) == "WUB") {
                i += 3;
            }

            // Print one space only if another word follows
            if (!firstWord && i < s.length()) {
                cout << " ";
            }
        }
        else {
            cout << s[i];
            firstWord = false;
            i++;
        }
    }

    return 0;
}