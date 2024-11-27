#include <bits/stdc++.h>
using namespace std;
 int main() {
    int t;
    cin >> t;
     while (t--) {
        int n, k;
        cin >> n >> k;
         unordered_map<int, vector<int>> brand_costs;
         for (int i = 0; i < k; i++) {
            int brand, cost;
            cin >> brand >> cost;
            brand_costs[brand].push_back(cost);
        }
         vector<int> max_earnings;
         for (auto &entry : brand_costs) {
            vector<int> &costs = entry.second;
            sort(costs.rbegin(), costs.rend());
            int brand_total = 0;
            for (int i = 0; i < costs.size(); i++) {
                brand_total += costs[i];
            }
            max_earnings.push_back(brand_total);
        }
         sort(max_earnings.rbegin(), max_earnings.rend());
        int total_max = 0;
        for (int i = 0; i < min((int)max_earnings.size(), n); i++) {
            total_max += max_earnings[i];
        }
         cout << total_max << endl;
    }
     return 0;
}