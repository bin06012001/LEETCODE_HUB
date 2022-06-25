class Solution {
public:
    bool checkPossibility(vector<int>& n) {
        int changeCount = 0; 
        for(int index = 1; index < n.size() && changeCount <=1 ; index++) { 
            if(n[index-1] > n[index]){ 
               changeCount++; 
               if(index-2<0 || n[index-2] <= n[index ]) 
                  n[index-1] = n[index]; 
               else 
                  n[index] = n[index-1]; 
            } 
        } 
        return changeCount<=1;
    }
};