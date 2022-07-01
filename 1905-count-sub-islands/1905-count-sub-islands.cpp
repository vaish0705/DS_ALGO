class Solution {
public:
   // bool flag=false;
    bool valid(int n,int m,int r,int c,vector<vector<int>>& grid1, vector<vector<int>>& grid2)
    {
        if(r>=0 && r<n && c>=0 && c<m && grid2[r][c]==1)
        {
            return true;
        }
        return false;
    }
    
    void dfs(int n,int m,int r,int c,vector<vector<int>>& grid1, vector<vector<int>>& grid2,int &flag)
    {
        
        grid2[r][c]=0;
        if(grid1[r][c]!=1)
        {
            flag=0;
            
        }
        
        
        if(valid(n,m,r+1,c,grid1,grid2))
        {
            dfs(n,m,r+1,c,grid1,grid2,flag);
        }
        
        if(valid(n,m,r-1,c,grid1,grid2))
        {
            dfs(n,m,r-1,c,grid1,grid2,flag);
        }
        
        if(valid(n,m,r,c-1,grid1,grid2))
        {
            dfs(n,m,r,c-1,grid1,grid2,flag);
        }
        
        
        if(valid(n,m,r,c+1,grid1,grid2))
        {
            dfs(n,m,r,c+1,grid1,grid2,flag);
        }
        
        
        
    }
        
    
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
  
        
        //0=water
        //1=island
       // vector<vetor<bool>>vis={false};
        
        int n=grid2.size();
        int m=grid2[0].size();
        int cnt=0;
        int flag=0;;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid2[i][j]==1 && grid1[i][j]==1)
                {
                    flag=1;
                    dfs(n,m,i,j,grid1,grid2,flag);
                   cnt+=flag;
                }
            }
        }
        
        
        
        return cnt;
        
        
    }
};