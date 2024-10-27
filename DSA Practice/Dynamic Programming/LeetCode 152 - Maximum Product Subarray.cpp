class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int pre =1, post = 1, maxi = INT_MIN;

        for(int i=0, j= arr.size()-1; i<arr.size(); i++, j--) {
            if(pre == 0) pre =1;
            if(post == 0) post =1;
            pre = pre * arr[i];
            post = post * arr[j];
            maxi = max(maxi, max(pre, post));
        } 
        return maxi;
    }
};
