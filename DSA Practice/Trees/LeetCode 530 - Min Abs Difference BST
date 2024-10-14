class Solution {
public:
    int minDiff = INT_MAX;
    void inorder(TreeNode* root, int &prev){
        if(root == NULL) return;
        inorder(root->left, prev);
        if( prev != -1 ) {
            minDiff = min(minDiff, root->val - prev);   
        }
        prev = root->val;
        inorder(root->right, prev);
    }
    int getMinimumDifference(TreeNode* root) {
        int prev = -1;
        inorder(root, prev);
        return minDiff;
    }
};
