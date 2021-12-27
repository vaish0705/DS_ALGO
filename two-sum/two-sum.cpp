class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int>ans;
        unordered_map<int,int>mp;
        
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(target-nums[i])!=mp.end())
            {
                //pushing index of second number
                ans.push_back(mp[target-nums[i]]);
                //pushing index of 1st number
                ans.push_back(i);
                return ans;
            }
            mp[nums[i]]=i;
        }
        return ans;
        
        
        
       
    }
};