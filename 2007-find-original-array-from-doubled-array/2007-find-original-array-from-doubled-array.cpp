class Solution {
public:
    vector<int> findOriginalArray(vector<int>& nums) {
        
       int n = nums.size();
        if (n % 2 == 1) return {};
        sort(nums.begin(), nums.end());
        vector<int> ans;
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            mp[nums[i]]++;
        }
        
        for (int i = 0; i < n; i++) {
          if (mp[nums[i]] == 0) continue;
          if (mp[nums[i] * 2] == 0) return {};
          ans.push_back(nums[i]);
          mp[nums[i]]--;
          mp[nums[i] * 2]--;
        }
        return ans;
        
        
    }
};