class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        //int total=accumulate(nums.begin(),nums.end(),0);
        int total=0;
        for(int i=0;i<nums.size();i++)
        {
            total+=nums[i];
        }
        
        int left_sum=0,right_sum=0;
        
        for(int i=0;i<nums.size();i++)
        {
            right_sum=total-nums[i]-left_sum;
            if(left_sum==right_sum)
                return i;
            left_sum+=nums[i];
        }
        
        return -1;
    }
};