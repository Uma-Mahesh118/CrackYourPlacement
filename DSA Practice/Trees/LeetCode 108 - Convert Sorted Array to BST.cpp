class Solution {
public:
    TreeNode* createTree(vector<int>&nums, int l, int r) {
        if(l>r) return NULL;
        if(l==r) return new TreeNode(nums[l]);

        TreeNode* root = new TreeNode(nums[(l+r)/2]);
        root->left = createTree(nums, l, ((l+r)/2) - 1);   
        root->right = createTree(nums, ((l+r)/2) + 1, r);          
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return createTree(nums, 0, nums.size()-1);
    }
};
