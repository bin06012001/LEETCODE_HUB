class Solution {
public:
    int maxProfit(vector<int>& a) {
        int maxp=0;
        int minsofar=a[0];
        
        for(int i=0;i<a.size();i++)
        {
            minsofar=min(minsofar,a[i]);
            int profit=a[i]-minsofar;
            maxp=max(maxp,profit);
        }
        return maxp;
    }
};