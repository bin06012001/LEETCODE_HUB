class Solution {
public:
    bool isUgly(int n) {
        if (!n) 
            return false;
        
        while ((!(n % 2) && (n/=2)) ||
                (!(n % 5) && (n/=5)) ||
                (!(n % 3) && (n/=3))) {}

        return n == 1;
    }
};