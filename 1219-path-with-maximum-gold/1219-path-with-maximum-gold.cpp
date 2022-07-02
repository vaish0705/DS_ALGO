class Solution {
public:
    
    int dfs(vector<vector<int>>&grid,int r,int c)
    {
    
        
      int ans=0, temp=0;
    if(r>=grid.size() || c<0 || r<0 || c>=grid[0].size() || grid[r][c]==0) return 0;
    temp=grid[r][c];
    grid[r][c]=0;
    ans = max(ans,dfs(grid,r-1,c));
    ans = max(ans,dfs(grid,r+1,c));
    ans = max(ans,dfs(grid,r,c+1));
    ans = max(ans,dfs(grid,r,c-1));
    grid[r][c] = temp;
    return ans+temp;
        
    }
    
    
    
    
    
    
    
    int getMaximumGold(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
    
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]!=0)
                {
                    ans=max(ans,dfs(grid,i,j));
                }
         
            
            }
        }
        
        return ans;
    }
};