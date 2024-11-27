#include <iostream>
#include <string>
using namespace std;
 int main() {
    int t; // number of test cases
    cin >> t;
        while (t--) {
        int n; // length of the string
        string s; // the input string
        cin >> n >> s;
                // Check if the first and last characters are the same
        if (s[0] == s[n - 1]) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
     return 0;
}