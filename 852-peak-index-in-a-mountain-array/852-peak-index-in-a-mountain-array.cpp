class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        int max=nums[0],c=0;
        //if(nums[0]<0)
          //  return 0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>max)
            {
                max=nums[i];
                c=i;
            }
        }
        
        return c;
    }
};