class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int> s;
        for(int num: nums)
            s.insert(num);
        
        int longsec=0;
        
        for(int num:nums)
        {
            if(s.find(num-1)==s.end())
            {
                int currnum=num;
                int currsec=1;
                
                while(s.find(currnum+1)!=s.end())
                {
                    currnum+=1;
                    currsec+=1;
                }
                
                longsec=max(longsec,currsec);
            }
        }
        
        return longsec;
    }
};