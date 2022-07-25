class Solution {
public:
    string convertToTitle(int cn) {
         string ans;
    while(cn>0)
    {
        --cn;
        int d= cn%26;
        cn/=26;
        ans+= 'A'+d;            
    }
   reverse(ans.begin(),ans.end());
   return ans; 
    }
};