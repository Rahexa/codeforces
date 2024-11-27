#include <iostream>
#include <string>
using namespace std;
 // Function to check if it's possible to get 'abc' with at most one swap
string can_sort_to_abc(string s) {
    if (s == "abc") {
        return "YES";  // Already sorted, no swap needed
    }
     // Try all possible swaps (since there are only 3 characters, it's feasible)
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            // Swap characters at positions i and j
            swap(s[i], s[j]);
            if (s == "abc") {
                return "YES";
            }
            // Swap back to try other pairs
            swap(s[i], s[j]);
        }
    }
     return "NO";  // No valid swap found
}
 int main() {
    int t;
    cin >> t;  // Number of test cases
    while (t--) {
        string s;
        cin >> s;  // Input the string
        cout << can_sort_to_abc(s) << endl;  // Output the result for each test case
    }
    return 0;
}