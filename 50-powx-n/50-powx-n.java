class Solution {
    public double myPow(double x, int n) {
        
          
        return myPowUtil(x,n);
    }
      double myPowUtil(double x, long n){
        if(x==0) return 0;
        if(n==0) return 1;
        
        if(n<0) return this.myPowUtil(1/x,-n);
            double result=this.myPowUtil(x*x,n/2);
        if(n%2==1)result=x*result;
        return result;
        
     }
}
        
    
