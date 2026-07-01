#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for (int num : nums) {
            ans ^= num;
        }

        return ans;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {4, 1, 2, 1, 2};

    cout << "Single Number: " << sol.singleNumber(nums) << endl;

    return 0;
}