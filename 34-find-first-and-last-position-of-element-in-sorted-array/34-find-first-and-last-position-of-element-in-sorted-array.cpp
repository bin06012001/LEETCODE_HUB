class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> vec;
        int n=-1;
        int m=-1;
        if(nums.size()==0)
        return {-1,-1};
        //if(nums.size()==1)
          //  return 0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {  n=i;
                break;}
            
        }
        
        for(int j=nums.size()-1;j>=0;j--)
            if(nums[j]==target)
            {
                m=j;
                break;
            }
        
        return {n,m};
        
    }
};