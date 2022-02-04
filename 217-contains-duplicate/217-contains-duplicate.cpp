class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       /* int freq[100001];
        for(int i=0;i<100001;i++)
        {
            freq[i]=0;
        }
        int ans=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>ans)
            {
                ans=nums[i];
            }
            freq[nums[i]]++;
        }
        for(int i=0;i<ans;i++)
        {
            if(freq[nums[i]]>1)
            {
                return true;
            }
        }
        
        return false;*/
          sort(nums.begin(),nums.end());
          map<int,bool>mp;    
        for(int i=0;i<nums.size();i++)
        {
            
            if(mp.find(nums[i])!=mp.end())
            {
                return true;
            }
            else
            {
               mp[nums[i]]=true; 
            }
        }
        
        return false;
    }
};