#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<string>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for (int price : prices) {
            minPrice = min(minPrice, price);
            maxProfit = max(maxProfit, price - minPrice);
        }

        return maxProfit;
    }
};
int main() {
    Solution sol;
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << "Maximum profit: " << sol.maxProfit(prices) << endl;
    return 0;

}