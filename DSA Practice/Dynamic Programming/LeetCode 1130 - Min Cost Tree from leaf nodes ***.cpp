class Solution {
public:
    int solve(vector<int>& arr, map<pair<int,int>, int>& maxi, int left, int right, vector<vector<int>>& dp) {
        if(left == right) return 0;

        int ans = INT_MAX;
        if(dp[left][right] != -1) return dp[left][right];

        for(int i=left; i<right; i++) {
            ans = min( ans, maxi[{left, i}]*maxi[{i+1, right}] + solve(arr, maxi, left, i, dp) + solve(arr, maxi, i+1, right, dp));
        }
        dp[left][right] = ans;
        return ans;
    }
    int mctFromLeafValues(vector<int>& arr) {
        map<pair<int,int>, int> maxi;
        vector<vector<int>> dp(arr.size()+1, vector<int>(arr.size()+1, -1));
        for(int i=0; i<arr.size(); i++) {
            maxi[{i,i}] = arr[i];
            for(int j=i+1; j<arr.size(); j++) {
                maxi[{i,j}] = max(maxi[{i,j-1}], arr[j]);
            }
        }

        return solve(arr, maxi, 0, arr.size()-1, dp);
        return 0;
    }
};


//Better Method
class Solution {
public:
    int mctFromLeafValues(vector<int>& a) {
        vector<int>adj[16];
        int n = a.size();
        // Store the positions of every value
        for(int i=0; i<n; i++){
            adj[a[i]].push_back(i); 
        }
        vector<int>done(n,0);
        int ans = 0;
        for(int j=1; j<=15; j++){
            if(adj[j].size()==0) continue;
            vector<int>v=adj[j];
            for(int i=0; i<v.size(); i++){
                int idx = v[i];
                int left = idx-1;
                int right = idx+1;
                //finding which leftmost and rightmost is free;
                while(left>=0 && done[left]) left--; 
                while(right<n && done[right]) right++; 
                int mx = 100;
                // checking that it exists or not
                if(left>=0) mx = min(mx,a[left]); 
                if(right<n) mx = min(mx,a[right]); 
                if(mx!=100)ans+=mx*j;
                done[v[i]]=1; // marking that this index is done.
            }
        }
        return ans;
    }
};
