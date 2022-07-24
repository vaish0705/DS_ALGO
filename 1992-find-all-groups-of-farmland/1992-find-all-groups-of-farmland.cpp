class Solution {
public:
    

    
    
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        
        
        //0=forested land
        //1=farmland
        
        //vector<int>coord;
        vector<vector<int>>ans;
        
        int n=land.size();
        int m=land[0].size();
        for(int i=0;i<land.size();i++)
        {
            for(int j=0;j<m;j++)
            {
                if(land[i][j]==1 &&(j==0 || land[i][j-1]==0) && (i==0 || land[i-1][j]==0))
                { 
                  
                    vector<int>temp;
                    temp.push_back(i);
                    temp.push_back(j);
                    int k=j;
                    while(k<m&&land[i][k]==1)
                    {
                        k++;
                        
                    }
                    k--;
                    int l=i;
                    while(l<n&&land[l][j]==1)
                    {
                        l++;
                    }
                    l--;
                   temp.push_back(l);
                  temp.push_back(k);
                    ans.push_back(temp);
                    
                    
                }
            }
        }
        
        return ans;
        
    }
};