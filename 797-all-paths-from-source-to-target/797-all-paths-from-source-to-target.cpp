class Solution {
public:
    
    
    void dfs(vector<vector<int>>&graph,vector<vector<int>>&ans,vector<int>&path,int curr)
    {
        path.push_back(curr);
        if(curr==graph.size()-1)
        {
            ans.push_back(path);
        }
        else
        {
            for(auto x:graph[curr])
            {
                dfs(graph,ans,path,x);
            }
        }
        
        path.pop_back();
    }
    
    
    
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        
        
        vector<vector<int>>ans;
        vector<int>path;
        int n=graph.size();
        //vector<int>adj[n+1];
        
       /* for(int i=0;i<n;i++)
        {
            for(int j=0;j<graph[i].size();j++)
            {
                adj[i].push_back(graph[i][j]);
            }
        }
        */
        
        dfs(graph,ans,path,0);
        
        return ans;
        
    }
};