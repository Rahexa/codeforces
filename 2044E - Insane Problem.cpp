#include <bits/stdc++.h>
using namespace std;
#define ll long long
 void processTestCase() {
    ll base, lower1, upper1, lower2, upper2;
    cin >> base >> lower1 >> upper1 >> lower2 >> upper2;
     vector<ll> powers;
    ll currentPower = 1;
    while (currentPower <= upper2) {
        powers.push_back(currentPower);
        if (currentPower > upper2 / base) break;
        currentPower *= base;
    }
     ll resultCount = 0;
     for (ll power : powers) {
        ll minValue = max(lower1, (lower2 + power - 1) / power); 
        ll maxValue = min(upper1, upper2 / power);              
         if (minValue <= maxValue) {
            resultCount += (maxValue - minValue + 1);
        }
    }
     cout << resultCount << endl;
}
 int main() {
    int testCases;
    cin >> testCases; 
    while (testCases--) {
        processTestCase();
    }
    return 0;
}