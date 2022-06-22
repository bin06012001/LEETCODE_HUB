class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        int res=0;
        int j=nums.size()-1;
        for(int i=0;i<nums.size()/2;i++)
        {
            res+=nums[j]-nums[i];
            j--;
        }
        return res;
    }
};