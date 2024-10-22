class Solution {
public:
    int climb(int n, vector<int> &v) {
        if( n==0 || n==1)
            return 1;
        if(v[n] == -1) 
            v[n] = climb(n-1, v) + climb(n-2, v);
        return v[n];
    }
    int climbStairs(int n) {
        vector<int> v(n+1, -1);
        return climb(n, v);
    }
};
