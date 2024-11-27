#include <iostream>
#include <vector>
#include <algorithm>
 int main() {
    int t;
    std::cin >> t;  // Number of test cases
     while (t--) {
        int n;
        std::cin >> n;  // Size of the vector
         std::vector<int> v(n);
        for (int i = 0; i < n; i++) {
            std::cin >> v[i];  // Input the elements of the vector
        }
         // If the number of elements is odd, Alice always wins
        if (n % 2 != 0) {
            std::cout << "YES" << std::endl;
            continue;
        }
         // Sort the vector in descending order
        std::sort(v.rbegin(), v.rend());
         // Check adjacent elements after sorting
        bool result = false;
        for (int i = 1; i < n; i += 2) {
            if (v[i] != v[i - 1]) {
                result = true;
                break;
            }
        }
         // Output the result
        if (result) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }
     return 0;
}