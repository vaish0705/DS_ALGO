class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        
        //0=>water
        //1=>land
        //perimeter=>4a
        int res=0;
        //int sides=0;
        for (int i=0;i<grid.size();i++) {
            for (int j=0;j<grid[0].size();j++) {
                if (grid[i][j] == 1) {
                    int sides=0;
                    if (i == 0 || grid[i-1][j] == 0) sides++;
                    if (i == grid.size()-1 || grid[i+1][j] == 0) sides++;
                    if (j == grid[0].size()-1 || grid[i][j+1] == 0) sides++;
                    if (j == 0 || grid[i][j-1] == 0) sides++;
                    res+=sides;
                }
            }
        }
        return res;
        
    }
};