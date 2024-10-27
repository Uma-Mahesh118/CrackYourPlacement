class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size(), m= text2.size();
        vector<vector<int>> ans(n+1, vector<int>(m+1, 0));

        for(int i=0; i<text1.size(); i++) {
            for(int j=0; j<text2.size(); j++) {
                ans[i+1][j+1] = (text1[i] == text2[j]) ? 1+ ans[i][j] :  max(ans[i][j+1], ans[i+1][j]);
            }       
        }
        return ans[n][m];
    }
};
