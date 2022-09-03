class Solution {
public:
    int climbStairs(int n) {
         long long int prepre=1;
        long long int prev=1;
        
        for(int i=2;i<n+1;i++)
        {
            long long int temp=prev;
            prev=prev+prepre;
            prepre=temp;
        }
        
        return prev;
    }
    
    
};


/*
var prevPrev = 1
        var prev = 1
        
        
        for(indx in 2 until n + 1){
            
            var temp = prev            
            prev = prev + prevPrev
            prevPrev = temp
        }
        
        return prev
*/