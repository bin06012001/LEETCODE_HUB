class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        unordered_set<int>s;
        
        sort(nums.begin(),nums.end());
        for(auto num:nums)
            s.insert(num);
        
        int ans=nums[nums.size()-k];
        
        return ans;
    }
};