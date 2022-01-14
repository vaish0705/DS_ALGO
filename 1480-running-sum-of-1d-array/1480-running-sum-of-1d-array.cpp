class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
       // vector<int>ans;
        /*
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
             sum+=nums[i];
            ans.push_back(sum);
        }*/
        
        vector<int>temp;
        temp.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            temp.push_back(temp.back()+nums[i]);
        }
        return temp;
        
        
    }
};