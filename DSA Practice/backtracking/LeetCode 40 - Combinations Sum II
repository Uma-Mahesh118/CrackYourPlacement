class Solution {
public:
    void func(vector<int> &arr, int ind, int target, vector<int> &sumArr, vector<vector<int>> &finalAns){
        if(target == 0) {
            finalAns.push_back(sumArr);
            return;
        }
        if(target<0 || ind>= arr.size()) return;
        
        for(int i= ind; i<arr.size(); i++) {
            if(i!=ind && arr[i] == arr[i-1]) continue;
            sumArr.push_back(arr[i]);
            func( arr, i+1, target-arr[i], sumArr, finalAns);
            sumArr.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        vector<vector<int>> finalAns;
        vector<int> ans;
        sort(arr.begin(), arr.end());
        func(arr, 0, target, ans, finalAns);
        return finalAns;
        
    }
};
