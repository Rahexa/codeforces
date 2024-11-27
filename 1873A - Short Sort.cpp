#include <bits/stdc++.h>
using namespace std;
 int main() {
    int t;
    cin >> t;
     while (t--) {
        string a;
        cin >> a;
         // Check if the string is already "abc"
        if (a == "abc") {
            cout << "YES" << endl;
        }
        else {
            // Try each swap and check if it results in "abc"
            bool possible = false;
             // Save the original string for restoration
            string original = a;
             // Swap a[0] and a[1]
            swap(a[0], a[1]);
            if (a == "abc") {
                possible = true;
            } else {
                // Restore string to original state
                a = original;
                 // Swap a[1] and a[2]
                swap(a[1], a[2]);
                if (a == "abc") {
                    possible = true;
                } else {
                    // Restore string to original state
                    a = original;
                     // Swap a[0] and a[2]
                    swap(a[0], a[2]);
                    if (a == "abc") {
                        possible = true;
                    }
                }
            }
             // Output the result based on whether any swap resulted in "abc"
            if (possible) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
     return 0;
}