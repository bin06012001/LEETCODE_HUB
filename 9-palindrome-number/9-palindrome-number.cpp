class Solution {
public:
    bool isPalindrome(int x) {
        long long y=0;
        int temp = x;
        while(x>0){
            int a = x%10;
            y=y*10+a;
            x=x/10;
        }
        if(temp==y) return 1;
        else return 0;
    }
};