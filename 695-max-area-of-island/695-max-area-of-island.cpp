class Solution {
public:
   
    bool valid(int n,int m,int r,int c,vector<vector<int>>&grid)
    {
        if(r>=0 && r<n && c>=0 && c<m &&grid[r][c]==1)
        {
            return true;
        }
        return false;
    }
    
    
    
    void dfs(int n,int m,int r,int c,vector<vector<int>>&grid,int &count)
    {
         count++;
        grid[r][c]=0;
        
       
        if(valid(n,m,r-1,c,grid))
        {
            dfs(n,m,r-1,c,grid,count);
        }
        
     if(valid(n,m,r+1,c,grid))
        {
            dfs(n,m,r+1,c,grid,count);
        }
         
     if(valid(n,m,r,c-1,grid))
        {
            dfs(n,m,r,c-1,grid,count);
        }
        
     if(valid(n,m,r,c+1,grid))
        {
            dfs(n,m,r,c+1,grid,count);
        }
        
        
        
        
    }
   /* int max(int a,int b)
    {
        return a>b?a:b; 
    }
    */
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        
        //1=land
        //0=water
        
        int ans=0;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    int count=0;
                  dfs(n,m,i,j,grid,count);
                                                                ans=max(ans,count);

                }
            }
        }
       
        return ans;
    }
};