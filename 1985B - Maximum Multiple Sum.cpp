#include <iostream>
using namespace std;
 typedef long long ll;  // Define 'll' as a shorthand for 'long long'
 int main() {
    // Fast input/output optimizations (optional for larger inputs)
    ios_base::sync_with_stdio(false);  // Disable synchronization with C stdio for faster I/O
    cin.tie(NULL);  // Untie cin from cout
     ll t;  // Number of test cases
    cin >> t;  // Read the number of test cases
        while (t--) {
        ll n;  // Variable to hold the value of 'n' for each test case
        cin >> n;  // Read the value of 'n' for the current test case
                // Logic to print output based on the value of 'n'
        if (n == 3) {
            cout << n << endl;  // If 'n' is 3, print the value of 'n' (which is 3)
        } else {
            cout << "2\n";  // For all other values of 'n', print 2
        }
    }
     return 0;  // End of the program
}