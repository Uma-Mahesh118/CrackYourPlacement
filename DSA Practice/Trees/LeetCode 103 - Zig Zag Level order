class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root == NULL) return {};
        queue<TreeNode*> q; 
        vector<vector<int>> v;
        q.push(root); q.push(NULL);
        while(q.size() > 1) {
            vector<int> l;
            while(q.front()!=NULL) {
                TreeNode* last = q.front();
                l.push_back(last->val);
                q.pop();
                if(last->left)
                    q.push(last->left);
                if(last->right)
                    q.push(last->right);
            }
            if(v.size()%2 == 0) v.push_back(l);
            else reverse(l.begin(), l.end()), v.push_back(l);
            q.pop();
            q.push(NULL);
        }
        return v;
    }
};
