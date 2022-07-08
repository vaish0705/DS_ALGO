class Solution {
public:
    
    
    
    void solve(int n,int freq[],vector<int>& nums,vector<int>&ds,vector<vector<int>>&ans)
    {
        if(ds.size()==n)
        {
            ans.push_back(ds);
            return;
        }
        
        
        for(int i=0;i<n;i++)
        {
            if(!freq[i])
            {
                freq[i]=1;
                ds.push_back(nums[i]);
                solve(n,freq,nums,ds,ans);
                freq[i]=0;
                ds.pop_back();
            }
        }
    }
    
    
    
    
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        int freq[n];
        for(int i=0;i<n;i++)
        {
            freq[i]=0;
        }
        vector<int>ds;
        vector<vector<int>>ans;
        solve(n,freq,nums,ds,ans);
        
        return ans;
        
    }
};