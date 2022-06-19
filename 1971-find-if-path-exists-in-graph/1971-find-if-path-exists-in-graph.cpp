class Solution {
public:
    

    
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        
        unordered_map<int,vector<int>>umap;
        for(auto x:edges)
        {
        vector<int>temp=x;
          int u =temp[0];
            int v=temp[1];
            
            umap[u].push_back(v);
            umap[v].push_back(u);
            
        }
    
        
       vector<bool>vis(n+1,false);
                vis[source]=true;
        queue<int>q;
        q.push(source);
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            for(auto i:umap[node])
            {
                if(!vis[i])
                {
                    q.push(i);
                    vis[i]=true;
                }
            }
        }
        
        
        return vis[destination];
        
        
        

        
    }
};