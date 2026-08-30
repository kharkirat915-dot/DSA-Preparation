class Solution {
public:
    bool isMirror(TreeNode* left, TreeNode* right) {
        // Both are NULL
        if (left == nullptr && right == nullptr)
            return true;

        // One is NULL, the other isn't
        if (left == nullptr || right == nullptr)
            return false;

        // Values must be equal
        if (left->val != right->val)
            return false;

        // Check opposite sides
        return isMirror(left->left, right->right) &&
               isMirror(left->right, right->left);
    }

    bool isSymmetric(TreeNode* root) {
        if (root == nullptr)
            return true;

        return isMirror(root->left, root->right);
    }
};