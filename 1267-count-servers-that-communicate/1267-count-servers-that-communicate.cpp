class Solution {
public:
    

    
    
    
    int dfs(int n,int m,int r,int c,vector<vector<int>>&grid)
    {
        
        if(r<0&&r>n&&c<0 && c>m&&grid[r][c]==0)
        {
            return 0;
        }
        
        int ans=1;
        grid[r][c]=0;
        
        
        for(int k=0;k<n;k++)
        {
            if(grid[k][c]==1)
            {
                ans+=dfs(n,m,k,c,grid);
            }
        }
    
        
        for(int k=0;k<m;k++)
        {
            if(grid[r][k]==1)
            {
                ans+=dfs(n,m,r,k,grid);
            }
        }
    
      
      return ans;
        
        
    }
    
    
    
    
    
    int countServers(vector<vector<int>>& grid) {
        
        int n=grid.size();
        int m=grid[0].size();
        
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                
                if(grid[i][j]==1)
                {
                    
                  int cnt=dfs(n,m,i,j,grid);
                    if(cnt>1)
                    {
                        
                        ans+=cnt;
                    }
                
                }
            }
        }
        
       
        
        return ans;
        
    }
};