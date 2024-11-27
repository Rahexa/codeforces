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
        bool found = false;
         // Use while loop to simulate string doubling until s is found
        while (current.size() <= 50) { // We limit the size of current to avoid excessive memory
            if (current.find(s) != string::npos) { // If s is found as a substring
                found = true;
                break;
            }
            current += current; // Double the string
            operations++;
        }
         if (found) {
            cout << operations << endl; // Output the number of operations
        } else {
            cout << -1 << endl; // If s is not found after a reasonable amount of operations
        }
    }
     return 0;
}