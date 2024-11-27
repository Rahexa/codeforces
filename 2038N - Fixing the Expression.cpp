#include <iostream>
#include <string>
using namespace std;
 int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        string s;
        cin >> s; // Input expression
         char a = s[0]; // First digit
        char op = s[1]; // Comparison operator
        char b = s[2]; // Second digit
         // Check validity and fix the expression if necessary
        if (op == '<') {
            if (a >= b) {
                if (a == b) op = '='; // Change '<' to '=' if digits are equal
                else op = '>';        // Change '<' to '>' if a > b
            }
        } else if (op == '>') {
            if (a <= b) {
                if (a == b) op = '='; // Change '>' to '=' if digits are equal
                else op = '<';        // Change '>' to '<' if a < b
            }
        } else if (op == '=') {
            if (a != b) {
                op = (a < b) ? '<' : '>'; // Change '=' to '<' or '>' based on the digits
            }
        }
         // Output the corrected expression
        cout << a << op << b << endl;
    }
    return 0;
}