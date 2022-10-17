class Solution {
public:
    bool checkIfPangram(string s) {
        
        unordered_map<char,int> mp;
        
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        
        //map<char,int>::iterator it;
        
        if(mp.size()==26)
        return true;
        else
            return false;
        
    }
};