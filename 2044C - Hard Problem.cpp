#include <iostream>
#include <algorithm>
using namespace std;
 int main() {
    int t;  
    cin >> t;
     while (t--) {
        int m, a, b, c;
        cin >> m >> a >> b >> c;
         int seated = 0;
         seated += min(m, a);
         seated += min(m, b);
         int remaining_seats = 2 * m - seated;  
        int remaining_monkeys = c;  
        seated += min(remaining_seats, remaining_monkeys);
         cout << seated << endl;
    }
     return 0;
}