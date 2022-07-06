class Solution {
public:
    int minSubArrayLen(int K, vector<int>& A) {
        int ans = 0;
      int n = A.size();
      int j = 0;
      int sum = 0;
      for(int i = 0; i < n; i++){
         sum += A[i];
         while(sum - A[j] >= K && j <= i){
            sum -= A[j];
            j++;
         }
         if(sum >= K){
            if(ans == 0 || ans > (i - j + 1)) ans = (i - j + 1);
         }
      }
   return ans; 
    }
};