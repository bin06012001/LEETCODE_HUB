class Solution {
public:
    int fib(int n) {
        int i,a=0,b=1,temp=1;
        if(n==0)
            return 0;
        else
        {
        for(i=1;i<n-1;i++)
        {
            a=b;
            b=temp;
            temp=a+b;
        }
        return temp;
        }
    }
};