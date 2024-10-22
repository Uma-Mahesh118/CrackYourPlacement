class Solution {
public:
    void func(vector<int> nums, int index, vector<int> subArr, vector<vector<int>> &finalArr) {
        finalArr.push_back(subArr); 
        for(int i= index; i<nums.size(); i++) {
            if(i!=index && nums[i] == nums[i-1]) continue;
            subArr.push_back(nums[i]);
            func( nums, i+1, subArr, finalArr);
            subArr.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> finalArr;
        sort(nums.begin(), nums.end());
        func(nums, 0, {}, finalArr); 
        return finalArr;     
    }
};
