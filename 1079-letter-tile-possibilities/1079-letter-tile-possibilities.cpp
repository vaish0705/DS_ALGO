class Solution {
public:
    /*
    string ds=" ";
    unordered_map<int, bool> freq;
    set<string> ans;
    void solve(string tiles)
    {
     
 if(ds.size()>tiles.size()) 
             return;
        ans.insert(ds);
           
           //000
           
           for(int i=0;i<tiles.length();i++)
           {
               if(freq[i]==0)
               {
                   ds+=tiles[i];
                   freq[i]=1;
                   solve(tiles);
                   freq[i]=0;
                   ds.pop_back();
      
               }
           }
       
    
        
        
        
    }
        
    */
    set<string> res;
    string curr="";
    unordered_map<int, bool> vis;
    
    void solve(string tiles)
    {
        if(curr.size()>tiles.size()) 
            return;
        res.insert(curr);
        
        for(int i=0;i<tiles.size();i++)
        {
            if(vis[i]) 
                continue;
            curr+=tiles[i];
            vis[i] = true;
            solve(tiles);
            curr.pop_back();
            vis[i] = false;
        }
    }
    
    
    
    
    int numTilePossibilities(string tiles) {
    
    
    
    
        
        solve(tiles);
        return res.size()-1;
        
        
        
        
    }
};