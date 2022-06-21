class Solution {
public:
    
    bool valid(int r,int c,int n,int m,vector<vector<int>>&grid)
    {
        if(r>=0&&r<n&&c>=0&&c<m&&grid[r][c]==0)
        {
            return true;
        }
        return false;
    }
    
    
    
    
    
    
   void dfs(int n,int m,int r,int c,vector<vector<int>>&grid)
   {
       
       
       grid[r][c]=1;
       int ax[4]={0,0,-1,1};
       int ay[4]={-1,1,0,0};
       
       
       for(int k=0;k<4;k++)
       {
           int nx=r+ax[k];
           int ny=c+ay[k];
           
           if(valid(nx,ny,n,m,grid))
           {
               dfs(n,m,nx,ny,grid);
           }
           
       }
       
       
       
   }
    
    
    
    
    
    
    
    
    
    int closedIsland(vector<vector<int>>& grid) {
        
        
        
        
        
        int n=grid.size();
        int m=grid[0].size();
        
        
         for(int i=0;i<n;i++)
        {
            //left->top to bottom
            int j=0;
            if(grid[i][j]==0)
            {
                dfs(n,m,i,j,grid);
            }
            
            
             j=m-1;
            //right-> top to bottom
            if(grid[i][j]==0)
            {
                dfs(n,m,i,j,grid);
            }
        }
        
        
         for(int j=0;j<m;j++)
        {
        
            int i=0;
            if(grid[i][j]==0)
            {
                dfs(n,m,i,j,grid);
            }
            
            
             i=n-1;
            
            if(grid[i][j]==0)
            {
                dfs(n,m,i,j,grid);
            }
        }
        
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==0)
                {
                    ans++;
                    dfs(n,m,i,j,grid);
                }
            }
        }
        
        
        return ans;
        
    }
    
};