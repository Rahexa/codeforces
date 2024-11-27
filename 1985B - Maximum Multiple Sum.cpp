#include <iostream>
using namespace std;
 int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
                int max_sum = 0;
        int optimal_x = 2;
                // Try every x from 2 to n
        for (int x = 2; x <= n; x++) {
            int k = n / x;  // Largest integer such that kx <= n
            int sum_of_multiples = x * (k * (k + 1)) / 2;  // Sum of multiples of x
                        // Update the maximum sum and the corresponding x
            if (sum_of_multiples > max_sum) {
                max_sum = sum_of_multiples;
                optimal_x = x;
            }
        }
                // Output the optimal x for this test case
        cout << optimal_x << endl;
    }
        return 0;
}