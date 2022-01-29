class Solution {
public:
    
    
    

    
       void print_subset(int n,vector<int>&nums,vector<int>&ds,vector<vector<int>>&ans,int freq[])
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
            ds.push_back(nums[i]);
            freq[i]=1;
            print_subset(n,nums,ds,ans,freq);
            freq[i]=0;
            ds.pop_back();
          }
            
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        
          int n=nums.size();
         vector<int>ds;
        vector<vector<int>>ans;
        int freq[8];
        for(int i=0;i<nums.size();i++)
        {
            freq[i]=0;
        }
        print_subset(n,nums,ds,ans,freq);
        return ans;
        
        
        
    }
};