class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        vector<int> vec;
        
        for(auto it:nums)
            vec.push_back(it);
        
        return vec;
    }
};