class Solution {
public:
    int climbStairs(int n) {
        
       /* if(n==0 ||n==1)
         {
             return 1;
         }
        
        */
       // return climbStairs(n-1)+climbStairs(n-2);
         int dp[n+1];
      /* memset(dp,-1,sizeof(dp));
        
        if(dp[n]!=-1)
        {
            return dp[n];
            
        }
        
        
    dp[n]=climbStairs(n-1)+climbStairs(n-2);
        return dp[n];*/
        
        dp[0]=1;
        dp[1]=1;
        
        for(int i=2;i<=n;i++)
        {
            dp[i]=dp[i-1]+dp[i-2];
        }
        
        return dp[n];
        
        
        
        
        
    }
};