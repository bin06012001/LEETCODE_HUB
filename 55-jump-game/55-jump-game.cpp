class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        if(nums[0]==0&&nums.size()==1)
            return true;
        int answer=0;
        for(int i=0;i<nums.size();++i)
        {
            if(i>answer){return false;}
            answer=max(answer,i+nums[i]);
        }
        return answer;
    }
};