class Solution {
public:
    
    
    void sub(int ind,int n,vector<int>&nums,vector<int>&ds,vector<vector<int>>&ans)
    {
        if(ind==n)
        {
            ans.push_back(ds);
            return;
        }
        
        ds.push_back(nums[ind]);
         sub( ind+1, n,nums,ds,ans);
        ds.pop_back();
        
        
        
         sub(ind+1,n,nums,ds,ans);
        
        
        
        
        
        
    }
    
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ds;
        vector<vector<int>>ans;
        int n=nums.size();
        sub(0,n,nums,ds,ans);
        return ans;
        
    }
};