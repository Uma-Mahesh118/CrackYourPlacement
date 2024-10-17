class Solution {
public:
    TreeNode* construct(vector<int>& pre, vector<int>& post, int prel, int prer, int postl, int postr) {
        if(prel > prer || postl >postr) return NULL;
        
        TreeNode* root = new TreeNode(pre[prel]);
        if(prel == prer)    return root;
        int i,j;
        for(i=postl; i<=postr; i++)
            if(pre[prel+1] == post[i]) {
                j = i - postl+1; break;
            }
        root->left = construct(pre, post, prel+1, prel+j, postl, i);    
        root->right = construct(pre, post, prel+j+1, prer, i+1, postr);
        return root;
    }
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        return construct(preorder, postorder, 0, preorder.size()-1, 0, preorder.size()-1);
    }
};
