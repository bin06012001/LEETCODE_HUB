class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        
      int no_children=g.size();
       int no_cookies=s.size();
        
        int j=0,c=0;
        
        for(int i=0;i<no_children&&j<no_cookies;)
        {
            if(g[i]<=s[j])
            {
                i++;
                c++;
            }
            j++;
        }
        
        return c;
    }
};