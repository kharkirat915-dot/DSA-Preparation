class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;

    void backtrack(int start, int n, int k) {
        // Combination is complete
        if (temp.size() == k) {
            ans.push_back(temp);
            return;
        }

        // Try every possible number
        for (int i = start; i <= n; i++) {
            temp.push_back(i);

            // Choose next number after i
            backtrack(i + 1, n, k);

            // Undo choice (backtracking)
            temp.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k) {
        backtrack(1, n, k);
        return ans;
    }
};