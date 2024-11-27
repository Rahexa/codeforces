#include <iostream>
#include <string>
using namespace std;
 void solve() {
    string s;
    cin >> s;
        long long n = s.size();
    bool f = true;  // flag to track if we inserted a character
        // Loop through the string to find consecutive identical characters
    for (long long i = 0; i < n - 1; i++) {
        cout << s[i];  // print the current character
        if (s[i + 1] == s[i] && f) {  // check if current and next character are the same
            f = false;  // mark that we've already inserted a character
            // Insert the opposite character between them
            if (s[i] == 'a') cout << "b";
            else cout << "a";
        }
    }
        // Print the last character
    cout << s[n - 1];
        // If no insertion has been done, insert the opposite character at the end
    if (f) {
        if (s[n - 1] == 'a') cout << "b";
        else cout << "a";
    }
        // Print a new line at the end
    cout << "\n";
}
 int main() {
    ios_base::sync_with_stdio(false);  // Optimize input/output
    cin.tie(NULL);  // Untie cin from cout for faster input
        int t = 1;  // Set number of test cases (1 in this case)
    cin >> t;
        while (t--) {
        solve();  // Call solve for each test case
    }
        return 0;
}