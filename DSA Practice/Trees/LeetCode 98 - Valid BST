class Solution {
public:
    bool validate(TreeNode* root, long Min, long Max) {
        if (!root) return true;  
        if (root->val <= Min || root->val >= Max) return false;
        return validate(root->left, Min, root->val) && validate(root->right, root->val, Max);
    }

    bool isValidBST(TreeNode* root) {
        return validate(root, LONG_MIN, LONG_MAX); 
    }
};
