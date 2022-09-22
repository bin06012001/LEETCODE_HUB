class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       
        set<int> s;
        
        for(int num:nums)
        {
            s.insert(num);
        }
        
        int longest_streak=0;
        
        for(int num:nums)
        {
            if(!s.count(num-1))
            {
                int current_streak=1;
                int current_num=num;
                
                while(s.count(current_num+1))
                {
                    current_num++;
                    current_streak++;
                }
                
                longest_streak=max(longest_streak,current_streak);
            }
        }
        
        return longest_streak;
        
    }
};