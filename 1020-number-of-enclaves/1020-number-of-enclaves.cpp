class Solution {
public:
     bool valid(int n,int m,int i,int j,vector<vector<int>>& grid)
    {
       if(i>=0&&i<n&&j<m && j>=0 &&grid[i][j]==1)
       {
            return true;
       }
        return false;
    }
    
    void dfs(int n,int m,int r,int c,vector<vector<int>>&grid)
    {
        
      grid[r][c]=0;
        
        
        if(valid(n,m,r+1,c,grid))
        {
            dfs(n,m,r+1,c,grid);
        }
        
        if(valid(n,m,r-1,c,grid))
        {
            dfs(n,m,r-1,c,grid);
        }
        
        if(valid(n,m,r,c-1,grid))
        {
            dfs(n,m,r,c-1,grid);
        }
        
        if(valid(n,m,r,c+1,grid))
        {
            dfs(n,m,r,c+1,grid);
        }
        
        
    }
    
    
    
    
    
    
    
    
    
    
    int numEnclaves(vector<vector<int>>& grid) {
        
        //0=sea cell
        //1=land cell
        
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            int j=0;
                   if(grid[i][j]==1)
                    {
                        dfs(n,m,i,j,grid);
                    }

              j=m-1;
                 if(grid[i][j]==1)
                    {
                        dfs(n,m,i,j,grid);
                    }
                
            }
        
    
         
        for(int j=0;j<m ; j++)
        {
            int i=0;
                   if(grid[i][j]==1)
                    {
                        dfs(n,m,i,j,grid);
                    }

              i=n-1;
            
                 if(grid[i][j]==1)
                    {
                        dfs(n,m,i,j,grid);
                    }
                
            }
        
    
    
    
    int cnt=0;
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<m;j++)
      {
          if(grid[i][j]==1)
          {
              cnt++;
          }
      }
  }
    
    
    
   return cnt; 
    
    
    
    
    
    
    
    
    }
};