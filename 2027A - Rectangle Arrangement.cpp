#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
                vector<int> v;
        vector<int> vv;
         for (int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;
            v.push_back(a);
            vv.push_back(b);
        }
         int max_first = *max_element(v.begin(), v.end());
        int max_second = *max_element(vv.begin(), vv.end());
         cout << 2 * (max_first + max_second) << endl;
    }
     return 0;
}