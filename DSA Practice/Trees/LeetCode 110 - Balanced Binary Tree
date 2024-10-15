class Solution {
public:
    int check(TreeNode* root, bool &bal) {
        if(root == NULL) return -1;
        int l =check(root->right, bal), r = check(root->left, bal);
        if(abs(r-l) > 1) bal = false;
        return 1 + max(l,r);
    }
    bool isBalanced(TreeNode* root) {
        bool bal = true;
        check(root, bal);
        return bal;
    }
};
