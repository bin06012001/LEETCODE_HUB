class Solution {
public:
    void dfs(int i, int j, int n, int m, vector<vector<int>>& grid, int& currArea){
        
        //Handling Invalid Cases
        
        if(i<0 || j<0 || i>=n || j>=m || grid[i][j] == 0){
            return;
        }
        
        currArea += 1;
        grid[i][j] = 0;
        
        dfs(i+1,j,n,m,grid,currArea);
        dfs(i,j+1,n,m,grid,currArea);
        dfs(i-1,j,n,m,grid,currArea);
        dfs(i,j-1,n,m,grid,currArea);
    }
    
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int maxArea = 0; //For maximum Area
        
        int n = grid.size();
        int m = grid[0].size();
        
        for(int i = 0; i<n; i++){
            
            for(int j = 0; j<m; j++){
                
                if(grid[i][j] == 1){
                    int currArea = 0; //For current Area
                    dfs(i,j,n,m,grid,currArea);
                    maxArea = max(maxArea, currArea); //Updating Current Area with Maximum
                }
                
            }
        }
        
        return maxArea;
        
    }
};