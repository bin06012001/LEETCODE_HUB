class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==0)return false;
        if(n==1)return true;
        
       return isPowerOfFour(n/4)&&isPowerOfFour(n%4==0);
        
        
    }
};