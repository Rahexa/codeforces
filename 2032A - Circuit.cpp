#include <iostream>
using namespace std;
 int main() {
    int t;
    cin >> t;
     while (t--) {
        int n;
        cin >> n;
         int cnt0 = 0, cnt1 = 0;
         for (int i = 0; i < 2 * n; i++) {
            int x;
            cin >> x;
            if (x == 1)
                cnt1++;
            else
                cnt0++;
        }
         if (cnt0 == 0)
            cout << 0 << " " << 0 << endl;
        else if (cnt0 >= cnt1)
            cout << cnt0 % 2 << " " << cnt1 << endl;
        else
            cout << cnt1 % 2 << " " << cnt0 << endl;
    }
     return 0;
}