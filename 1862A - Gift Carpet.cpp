#include <bits/stdc++.h>
using namespace std;
 int main() {
    int t;
    cin >> t;
     while (t--) {
        int n, m;
        cin >> n >> m;
         // Use a 2D array of characters to store the matrix
        char s[n][m];  // This will store each character of the carpet
                string temp = "vika";  // The sequence we want to find
                // Input the carpet, row by row
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> s[i][j];  // Read each character into the 2D char array
            }
        }
         int it = 0;  // Pointer to track the character of "vika"
        bool found = false;
         // Loop through columns and try to match the characters of "vika"
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (s[j][i] == temp[it]) {  // Compare the current character with "vika"
                    it++;  // Move to the next character in "vika"
                    if (it == 4) {  // If we've found all characters of "vika"
                        found = true;
                    }
                    break;  // Move to the next column once we find a match
                }
            }
            if (found) {
                break;  // We found the "vika" sequence, no need to check further columns
            }
        }
         // Output the result
        if (found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
     return 0;
}