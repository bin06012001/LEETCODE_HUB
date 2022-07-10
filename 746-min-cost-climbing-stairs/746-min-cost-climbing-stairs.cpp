class Solution {
public:
    
    #define ll int
    ll dp[1005];
    ll n;
    ll rec(ll i,vector<ll>&a)
    {
        if(i>=n)
            return 0;
        ll &ans=dp[i];
        if(ans!=-1)
            return ans;
        ans=a[i]+min(rec(i+2,a),rec(i+1,a));
       
        return ans;
    }
    
    
    int minCostClimbingStairs(vector<int>& c) {
       memset(dp,-1,sizeof(dp));
         n=c.size();
        
        return min(rec(1,c),rec(0,c));  
    }
};