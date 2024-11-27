#include <bits/stdc++.h>
using namespace std;
 int main() {
    int t;
    cin >> t; // Number of test cases
     while (t--) {
        int n, m;
        cin >> n >> m; // Lengths of strings x and s
         string x, s;
        cin >> x >> s; // Input strings
         string current = x; // Start with the initial string
        int operations = 0; // Count of operations
         // Repeat until s is found in x
        while (current.find(s) == string::npos) {
            current += current; // Append x to itself
            operations++;
             // If the length exceeds a reasonable bound, break (safe-guard)
            if (current.size() > 50) break;
        }
         if (current.find(s) != string::npos) {
            cout << operations << endl;
        } else {
            cout << -1 << endl; // If s never appears
        }
    }
     return 0;
}