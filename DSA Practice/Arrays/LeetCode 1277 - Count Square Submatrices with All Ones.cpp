class Solution {
public:
    int countSquares(vector<vector<int>>& a) {
        int sum =0;
        for(int i=0; i<a.size(); i++) {
            for(int j=0; j<a[i].size(); j++) {
                if(i==0 || j==0) {
                    sum +=a[i][j];
                    continue;
                }
                if(a[i][j] == 1) {
                    a[i][j] = 1 + min(a[i-1][j], min(a[i-1][j-1], a[i][j-1]));
                    sum += a[i][j];
                }
            }
        }
        return sum;
    }
};
