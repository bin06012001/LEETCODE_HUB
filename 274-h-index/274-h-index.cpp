class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
    if(n==0)
        return 0;
        
    sort(citations.begin(),citations.end());
    int r=0;
    for(int i=0;i<n;i++){
        if(citations[i]>=n-i)
            r=max(r,n-i);
    }
    return r;
    }
};