class Solution {
public:
    
    
    int chk(vector<int>&nums)
    {
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>=nums[i+1])
            {
                return 0;
            }
        }
        
        return 1;
    }
    
    
    
    
    bool canBeIncreasing(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            int val=nums[i];
            nums.erase(nums.begin()+i);
            if(chk(nums))
            {
                return true;
            }
            nums.insert(nums.begin()+i,val);
        }
        
        return false;
    }
};