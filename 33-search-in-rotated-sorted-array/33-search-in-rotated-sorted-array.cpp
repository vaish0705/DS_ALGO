class Solution {
public:
    
    int searchelement(vector<int>nums,int target,int low,int high)
    {
        if(low>high)
        {
            return -1;
        }
        
        int mid=(low+high)/2;
        if(nums[mid]==target)
        {
            return mid;
        }
        
        
        if(nums[low]<=nums[mid])//means left part is sorted
        {
            if(target>=nums[low]&&target<=nums[mid])
            {
               return searchelement(nums,target,low,mid-1); 
            }
            return searchelement(nums,target,mid+1,high); 
        }
        
        else
        {

            if(target>=nums[mid]&&target<=nums[high])
            {
               return searchelement(nums,target,mid+1,high); 
            }
            return searchelement(nums,target,low,mid-1); 
        
        
        }
        
        
    }
    
    
    
    
    int search(vector<int>& nums, int target) {
        
        int n=nums.size();
        return searchelement(nums,target,0,n-1);
        
        
        
        
    }
};