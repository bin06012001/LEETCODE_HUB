class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size() , m = grid[0].size();
    int perimeter = 0 , sides = 0;
    for(int i = 0 ; i < n ; i++)
        for(int j = 0 ; j < m;  j++) {
            if(grid[i][j] == 1) {
                sides = 0;
                if(i == 0)
                    sides++;
                else
                    sides += (grid[i - 1][j] == 0);
                if(j == 0)
                    sides++;
                else
                    sides += (grid[i][j - 1] == 0);
                if(i == n - 1)
                    sides++;
                else
                    sides += (grid[i + 1][j] == 0);
                if(j == m - 1)
                    sides++;
                else
                    sides += (grid[i][j + 1] == 0);
                perimeter += sides;
            }
        }
    return perimeter;
    }
};