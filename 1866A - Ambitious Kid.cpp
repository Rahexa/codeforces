#include <iostream>
#include <vector>
 using namespace std;
 int main() {
    int n;
     cin >> n;
     vector<int> arr(n);
      for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
     int min_value = abs(arr[0]);
     for (int i = 1; i < n; ++i) {
        if (abs(arr[i]) < abs (min_value)) {
            min_value = abs(arr[i]);
        }
    }
     cout <<min_value<<endl;
     return 0;
}