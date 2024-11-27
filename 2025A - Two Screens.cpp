#include <bits/stdc++.h>
using namespace std;
 int main() {
    int tt; // Number of test cases
    cin >> tt;
     while (tt--) {
        string s, t; // Two strings s and t
        cin >> s >> t;
         int cnt = 0; // Counter to keep track of matching characters
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == t[i]) { // Compare characters of s and t
                cnt++;
            } else {
                break; // Stop when characters don't match
            }
        }
         if (cnt == 0) {
            // If no matching prefix exists, output the sum of sizes of s and t
            cout << s.size() + t.size() << endl;
        } else {
            // Output the size of s and t minus the matching prefix length
     int x = s.size() -cnt;
    int y  = t.size()-cnt;
    cout<<cnt+1+x+y<<endl;
         }
    }
     return 0;
}