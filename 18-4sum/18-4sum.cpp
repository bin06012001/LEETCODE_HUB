class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
     
        vector<vector<int>> res;
        if(nums.empty())
            return res;
        int len = nums.size();
        sort(nums.begin() , nums.end());
        
        for(int i=0;i<len;i++) {
            
            for(int j=i+1;j<len;j++) {
                long long target2 = (long long)target - (long long)nums[i] - (long long)nums[j];
                int left = j+1;
                int right = len-1;
                
                while(left < right) {
                    int twoSum = nums[left] + nums[right];
                    if(twoSum < target2)
                        left++;
                    else if(twoSum > target2)
                        right--;
                    else {
                        vector<int> quad(4,0);
                        quad[0] = nums[i];
                        quad[1] = nums[j];
                        quad[2] = nums[left];
                        quad[3] = nums[right];
                        res.push_back(quad);
                        
                        //Processing duplicates for 3rd quad member
                        while(left<right && nums[left]  == quad[2])
                            ++left;
                        //Processing duplicates for 4rd quad member
                        while(left<right && nums[left]  == quad[3])
                            --right;
                    }
                }
                //Processing duplicates at position of j
                while(j+1 < len && nums[j+1] == nums[j]) 
                    ++j;
            }
            //Processing duplicates at position of i
            while (i+1 < len && nums[i+1] == nums[i]) 
                ++i;
        }
        return res;
        
    }
};