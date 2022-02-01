class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size(); 
        vector<int>adj[n+2];
      /*  for(int i=0;i<edges.size();i++)
        {
            for(int j=0;j<edges[i].size();j++)
            {
                adj[edges[i][j]].push_back(edges[i][j+1]);
                 adj[edges[i][j+1]].push_back(edges[i][j]);
            }
        }*/
        
         
      //  vector<vector<int>> adj(n+2); 
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        for(int i=1;i<=n+1;i++)
            if(adj[i].size()>1)return i; 
        return 0;
        
        
        
        
        
        
        
    }
};