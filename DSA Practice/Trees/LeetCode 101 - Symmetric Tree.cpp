class Solution {
public:
    bool check(TreeNode* left, TreeNode* right) {
        if(left == NULL || right == NULL) return left == right;
        if(left->val != right->val) return false;

        return check(left->left, right->right) && check(left->right, right->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;
        return check(root->left, root->right);
    }
};
