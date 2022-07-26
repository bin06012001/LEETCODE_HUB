class Solution {
    
    bool check(int n)
    {
        int num=n;
        while(n>0)
        {
            int d=n%10;
            if(d==0)
                return false;
            
            if(num%d!=0)
                return false;
            
            n/=10;
        }
        
        return true;
    }
    
    
public:
    vector<int> selfDividingNumbers(int left, int right) {
        
        vector<int> vec;
        
        for(int i=left;i<=right;i++)
        {
            if(check(i))
            vec.push_back(i);
        }
        
        return vec;
        
    }
};