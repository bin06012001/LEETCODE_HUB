class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>mp;
        
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;
        
        map<int,int>::iterator it;
        
        for(it=mp.begin();it!=mp.end();it++)
        {
            //cout
            //cout<<it->second;
            if(it->second>=2)
            {return it->first;
             break;}
        }
        
        return 0;
    }
};