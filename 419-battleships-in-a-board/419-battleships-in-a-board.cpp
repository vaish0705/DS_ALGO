class Solution {
public:
    bool valid(int n,int m,int r,int c,vector<vector<char>>&board)
    {
        if(r>=0&&r<n&&c>=0&&c<m&&board[r][c]=='X')
        {
            return true;
        }
        return false;
    }
    
    
void dfs(int n,int m,int r,int c,vector<vector<char>>&board)
{
 board[r][c]='Y';
    
    if(valid(n,m,r+1,c,board))
    {
        dfs(n,m,r+1,c,board);
    }
    
   /* if(valid(n,m,r-1,c))
    {
        dfs(n,m,r-1,c,board);
    }*/
    
    if(valid(n,m,r,c+1,board))
    {
        dfs(n,m,r,c+1,board);
    }
   /* 
    if(valid(n,m,r,c-1))
    {
        dfs(n,m,r,c-1,board);
    }
    */
    
    
}
    
    
    int countBattleships(vector<vector<char>>& board) {
        
        int n=board.size();
        int m=board[0].size();
        
        int cnt=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]=='X')
                {
                    
                    dfs(n,m,i,j,board);
                    cnt++;
                }
            }
        }
        
        return cnt;
    }
};