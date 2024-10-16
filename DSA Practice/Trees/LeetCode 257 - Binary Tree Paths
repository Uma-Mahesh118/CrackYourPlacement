class Solution {
public:
    void paths(TreeNode* root, string str, vector<string> &ans) {
        if(root == NULL) return;
        
        if(str == "") str+=  to_string(root->val);
        else str+= "->"+to_string(root->val);
        
        if(root->left == NULL && root->right ==NULL) 
            ans.push_back(str);
        else {
            paths(root->left, str, ans);
            paths(root->right, str, ans);
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        paths(root, "",ans);
        return ans;
    }
};
