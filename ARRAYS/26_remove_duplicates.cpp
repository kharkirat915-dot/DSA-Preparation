#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        int i = 1;

        for (int j = 1; j < nums.size(); j++) {
            if (nums[j] != nums[j - 1]) {
                nums[i] = nums[j];
                i++;
            }
        }

        return i;
    }
};
int main() {
    Solution obj;
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5};
    int newLength = obj.removeDuplicates(nums);
    cout << "New length after removing duplicates: " << newLength << endl; // Output: New length after removing duplicates: 5
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}