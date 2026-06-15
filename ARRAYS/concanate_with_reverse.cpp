#include <iostream>
#include <vector>
using namespace std;

vector<int> concatenateWithReverse(vector<int>& nums) {
    vector<int> ans;

    // Add original array
    for (int i = 0; i < nums.size(); i++) {
        ans.push_back(nums[i]);
    }

    // Add reverse of array
    for (int i = nums.size() - 1; i >= 0; i--) {
        ans.push_back(nums[i]);
    }

    return ans;
}

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> result = concatenateWithReverse(nums);

    cout << "Concatenated array with reverse: ";
    for (int num : result) {
        cout << num << " ";
    }

    cout << endl;
    return 0;
}