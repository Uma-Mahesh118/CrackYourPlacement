class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == NULL) return {};
        queue<TreeNode*> q; 
        vector<vector<int>> v;
        q.push(root);
        q.push(NULL);
        while(q.size() > 1) {
            vector<int> l;
            TreeNode* last = NULL;
            while(q.front()!=NULL) {
                last = q.front();
                l.push_back(last->val);
                q.pop();
                if(last->left)
                    q.push(last->left);
                if(last->right)
                    q.push(last->right);
            }
            v.push_back(l);
            q.pop();
            q.push(NULL);
        }
        return v;
    }
};
