class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int t) {
        
        
        int m = matrix.size(),n = matrix[0].size(),i = 0,j = n - 1;
        while(i<m && j>=0){
            if(matrix[i][j]==t){
                return true;
            }
            else if(matrix[i][j]>t){
                j--;
            }
            else{
                i++;
            }
        }
        return false;
    }
};