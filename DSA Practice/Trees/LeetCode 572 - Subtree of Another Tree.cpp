class Solution {
public:
    bool check(TreeNode* root1, TreeNode* root2) {
        if(root1 == NULL && root2 == NULL) return true;
        else if(root1==NULL || root2==NULL) return false;

        return root1->val == root2->val && check(root1->left, root2->left) && check(root1->right, root2->right);
    }


    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL) return false;

        if(root->val == subRoot->val) {
            if(check(root, subRoot)) return true;
        }
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};
