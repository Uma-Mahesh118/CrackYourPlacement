class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(root1==NULL) return root2;
        else if(root2==NULL) return root1;

        root1->val = root1->val + root2->val;
        if(root1->left || root2->left) 
            root1->left = mergeTrees(root1->left, root2->left);
        
        if(root1->right || root2->right)
            root1->right=mergeTrees(root1->right, root2->right);
        return root1;        
    }
};
