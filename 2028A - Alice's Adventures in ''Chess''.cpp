#include <bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;
         int x = 0, y = 0;  // Alice starts at (0, 0)
         // To prevent infinite movement, limit the number of iterations
        bool found = false;
        int max_cycles = 10000;  // A very large number to simulate enough moves
        while (max_cycles--) {
            for (int i = 0; i < n; i++) {
                if (s[i] == 'N') {
                    y++;
                } else if (s[i] == 'E') {
                    x++;
                } else if (s[i] == 'S') {
                    y--;
                } else if (s[i] == 'W') {
                    x--;
                }
                 // Check if Alice reaches the Red Queen
                if (x == a && y == b) {
                    found = true;
                    break;
                }
            }
             if (found) {
                cout << "YES" << endl;
                break;
            }
        }
         if (!found) {
            cout << "NO" << endl;
        }
    }
    return 0;
}