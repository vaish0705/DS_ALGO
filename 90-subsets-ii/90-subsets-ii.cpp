class Solution {
public:
    
    
    
    
    void print_subset(int ind,int n,vector<int>&nums,vector<int>&ds,vector<vector<int>>&ans)
    {
        ans.push_back(ds);
        
        
        
        
        
        
        
        for(int i=ind;i<n;i++)
        {
            if(ind!=i && nums[i-1]==nums[i])
            {
                continue;
            }
            ds.push_back(nums[i]);
            print_subset(i+1,n,nums,ds,ans);
            ds.pop_back();
            
        }
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int>ds;
        vector<vector<int>>ans;
        print_subset(0,n,nums,ds,ans);
        return ans;
        
    }
};