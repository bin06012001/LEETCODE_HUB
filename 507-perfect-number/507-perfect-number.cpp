class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num<=1)
            return false;
        long long int sum1=1;
        
        for(long long int i=2;i<=(int)(sqrt(num));i++){
            if(num%i==0){
                sum1+=i;
                if(i*i!=num){
                    sum1= sum1+ (num/i);
                }
            }
         
        }
        return (sum1==num)?true:false;
    }
};