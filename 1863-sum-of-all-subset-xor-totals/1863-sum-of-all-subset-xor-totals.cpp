class Solution {
public:
    
    
    void subset(int ind,int n,vector<int>&ds,vector<int>&nums,vector<vector<int>>&ans)
    {
        if(ind==n)
        {
            ans.push_back(ds);
            return;
        }
        
        
        ds.push_back(nums[ind]);
        subset(ind+1,n,ds,nums,ans);
        ds.pop_back();
        
        
        
        
         subset(ind+1,n,ds,nums,ans);
        
    }    
    
    
    
    
    
    int subsetXORSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>ds;
        vector<vector<int>>ans;
        int zor,sum=0;
        subset(0,n,ds,nums,ans);
        for(int i=0;i<ans.size();i++)
        {zor=0;
            for(int j=0;j<ans[i].size();j++)
            {
                zor^=ans[i][j];
               // cout<<"zor"<<zor<<",";
            }
            //cout<<endl;
        sum+=zor;
            //cout<<"sum"<<sum;
        }
        
        return sum;
        
        
        
    }
};