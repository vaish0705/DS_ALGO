class Solution {
public:
    
    
    
    
    void sum(int ind, int target,int n, vector<int> &arr, vector<vector<int>> &ans, vector<int>&ds)
    {
        if(target==0)
        {
            ans.push_back(ds);
            return;
        }
        
        
        for(int i=ind;i<n;i++)
        {
            if(i>ind && arr[i-1]==arr[i])
            {
                continue;
            }
            if(arr[i]>target)
            {
                break;
            }
            ds.push_back(arr[i]);
            sum(i+1,target-arr[i],n,arr,ans,ds);
            ds.pop_back();
        }
            
        
    }
    
    
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        int n=candidates.size();
        
        vector<int>ds;
        vector<vector<int>>ans;
        
        
        sum(0,target,n,candidates,ans,ds);
        return ans;
        
        
        
        
        
        
        
    }
};