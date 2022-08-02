class Solution {
public:
    
    int binary_search(vector<int>& nums,int l,int r,int target)
    {
        if(l<=r)
        {
            int mid=(l+r)/2;
            
            if(nums[mid]==target)
                return mid;
            if(nums[mid]>target)
                return binary_search(nums,l,mid-1,target);
            if(nums[mid]<target)
                return binary_search(nums,mid+1,r,target);
        }
        return -1;
    }
    
    
    int search(vector<int>& nums, int target) {
        
        int l=0;
        int r=nums.size()-1;
        
        return binary_search(nums,l,r,target);
        
    }
};