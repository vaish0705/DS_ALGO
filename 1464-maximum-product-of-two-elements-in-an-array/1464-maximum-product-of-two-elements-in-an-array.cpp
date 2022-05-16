class Solution {
public:
    /*void sortvector(int n,vector<int>&nums)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(nums[j]>nums[j+1])
                {
                swap(nums[j],nums[j+1]);
                }
                }
        }
        
        
    }*/
    
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        return (nums[n-1]-1)*(nums[n-2]-1);
        
    }
};