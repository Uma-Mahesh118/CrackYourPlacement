class Solution {
public:
    void comb(vector<vector<int>>& ans, int left, int n, int k, vector<int>& v) {
        if(k<0 || left> n)  return;
        if(k == 0) {
            ans.push_back(v);
            return;
        }
        else if(left +1 <= n) {
            v.push_back(left);
            comb(ans, left+1, n, k-1, v);
            v.pop_back();
            comb(ans, left+1, n, k, v);
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> v; 
        comb(ans, 1, n+1, k, v);
        return ans;
    }
};
