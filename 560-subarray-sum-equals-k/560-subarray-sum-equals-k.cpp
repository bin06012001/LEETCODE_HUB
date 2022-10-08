class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        map<int,int> mp;
        
        int ans=0,current_sum=0;
        
        for(int i=0;i<nums.size();i++)
        {
            current_sum+=nums[i];
            if(current_sum==k) ans++;
            
            
            if(mp.find(current_sum-k)!=mp.end())
                ans=mp[current_sum-k]+ans;
            
            if(mp.find(current_sum)!=mp.end())
                mp[current_sum]++;
            else
            mp[current_sum]=1;
        }
        
        return ans;
        
    }
};