class Solution {
    public int[] findErrorNums(int[] nums) {
      int n=nums.length;
    int full[]=new int[n+1];
    
    // you can use for each loop here too
    for(int i=0;i<n;i++){
        full[nums[i]]++;
    }


    int a[]=new int[2];
    for(int i=1;i<=n;i++){
        if(full[i]==2){
            a[0]=i;
        }
        if(full[i]==0){
            a[1]=i;
        }
    }
    return a;  
    }
}