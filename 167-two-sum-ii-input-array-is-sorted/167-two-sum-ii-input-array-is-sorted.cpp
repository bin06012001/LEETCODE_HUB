class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        
        vector<int> vec(2);
        int l=0,r=nums.size()-1;
        while(l<r)
        {
            if(nums[l]+nums[r]>target)
                r--;
            else if(nums[l]+nums[r]<target)
                l++;
            else
            {vec[0]=l+1;
             vec[1]=r+1;
            break;}
        }
        
        return vec;
    }
};