class Solution {
public:
    void inorder(TreeNode *root, int &k, int &ans) {
        if(root == NULL || k<0) return;
        inorder(root->left, k, ans);
        k--;
        if(k==0) {
            ans = root->val;
            return;
        }
        inorder(root->right, k, ans);
    }
    int kthSmallest(TreeNode* root, int k) {
        int ans;
        inorder(root,k, ans);
        return ans;
    }
};
