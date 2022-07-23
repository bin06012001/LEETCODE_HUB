class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        vector<int> vec;
        
        for(int i=0;i<nums.size();i++)
        {
            int c=0;
            for(int j=0;j<nums.size();j++)
            {
                if(nums[i]>nums[j]&&i!=j)
                    c++;
            }
            vec.push_back(c);
            
        }
        return vec;
    }
};