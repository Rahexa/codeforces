#include <bits/stdc++.h>
using namespace std;
 int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int x, k;
        cin >> x >> k;
         int sum = 0, temp = x;
         // Calculate the sum of digits of x
        while (temp != 0) {
            sum += temp % 10;
            temp /= 10;
        }
         if (sum % k == 0) {
            cout << x << endl;
        } else {
            // Find the next number whose sum of digits is divisible by k
            while (true) {
                x++;
                sum = 0;
                temp = x;
                 // Recalculate the sum of digits for the new x
                while (temp != 0) {
                    sum += temp % 10;
                    temp /= 10;
                }
                 if (sum % k == 0) {
                    cout << x << endl;
                    break;
                }
            }
        }
    }
     return 0;
}