class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        //int cnt=nums.size();
        int n=nums.size();
        int begin=0;
        for(int i=0;i<n;i++)  //3 2 2 3
        {
            if(nums[i]!=val)   // 3 2 2 3
            {
                             
            nums[begin]=nums[i];
                begin++;
            }
        }
        
        return begin;
    }
};