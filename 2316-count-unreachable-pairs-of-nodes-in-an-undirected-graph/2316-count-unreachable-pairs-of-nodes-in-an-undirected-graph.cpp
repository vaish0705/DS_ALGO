class Solution {
public:
    
    
    
    
    
    void dfs(int source,vector<bool>&vis,vector<int>adj[],int n,long long &count)
    {
        vis[source]=true;
        count++;
        for(auto x:adj[source])
        {
            if(!vis[x])
            {
                dfs(x,vis,adj,n,count);
            }
        }
        
    }
    
    
    
    
    
    
    
    long long countPairs(int n, vector<vector<int>>& edges) {
        
        int m=edges.size();
        vector<int>adj[n+2];
        for(int i=0;i<m;i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
            
        }
        vector<bool>vis(n+1,false);
        
    long long   ans = ((long long)n*(n-1))/2;
        for(int i=0;i<n;i++)
        {
            long long count=0;
            if(vis[i]==false)
            {
                
                dfs(i,vis,adj,n,count);
                ans-=(count*(count-1))/2;
            }
        }
        
        return ans;
        
    }
};