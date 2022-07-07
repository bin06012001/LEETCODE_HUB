class Solution {
public:
    bool increasingTriplet(vector<int>& A) {
        int n=A.size();
        
        int a=INT_MAX;
        int b=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(A[i]<a)
            {a=A[i];}
            else if(A[i]>a and A[i]<b)
            {
                b=A[i];
            }
            else if(A[i]>b)
            {
                return true;
            }
        }
        return false;
    }
};