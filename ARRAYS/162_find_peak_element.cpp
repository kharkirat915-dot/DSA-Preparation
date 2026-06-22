#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            bool leftGreater = (i == 0 || nums[i] > nums[i - 1]);
            bool rightGreater = (i == n - 1 || nums[i] > nums[i + 1]);

            if (leftGreater && rightGreater) {
                return i;
            }
        }

        return -1;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1, 2, 3, 1};
    int peakIndex = obj.findPeakElement(nums);
    cout << "Peak element index: " << peakIndex << endl; // Output: Peak element index: 2
    return 0;
}