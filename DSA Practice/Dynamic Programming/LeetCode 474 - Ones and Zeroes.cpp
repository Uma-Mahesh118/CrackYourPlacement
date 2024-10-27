class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<pair<int,int>>v;
        for(int i=0;i<strs.size();i++){
            int zeros=0, ones=0;
            for(char ch: strs[i]){
                ch == '0' ? zeros++ : ones++;
            }
            v.push_back({zeros,ones});
        }
        vector<vector<int>> dp(m+1,vector<int>(n+1,0));
        for(int k=0; k<strs.size(); k++){
            int tempzer = v[k].first, tempone = v[k].second;
            for(int i=m;i>=tempzer;i--){
                for(int j=n;j>=tempone;j--){
                    dp[i][j] = max(dp[i][j] , 1+dp[i-tempzer][j-tempone]);
                }
            }
        }
        return dp[m][n];
    }
};
