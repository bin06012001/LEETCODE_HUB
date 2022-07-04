class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int,int> mp;
        vector<int> vec;
        
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        
        map<int,int>::iterator it;
        for(it=mp.begin();it!=mp.end();it++)
        {
            //cout<<it->first<< " "<<it->second<<"\n";
            if(it->second==1)
            {
                vec.push_back(it->first);
            }
        }
     return vec;  
    }
};