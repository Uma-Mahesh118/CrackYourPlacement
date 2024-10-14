class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        if(root == NULL) return {};
        queue<TreeNode*> q; 
        vector<int> v;
        q.push(root);
        q.push(NULL);
        while(q.size() > 1) {
            TreeNode* last = NULL;
            while(q.front()!=NULL) {
                last = q.front();
                q.pop();
                if(last->left)
                    q.push(last->left);
                if(last->right)
                    q.push(last->right);
            }
            v.push_back(last->val);
            q.pop();
            q.push(NULL);
        }
        return v;
    }
};
