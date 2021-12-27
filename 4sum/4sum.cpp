class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        int n=nums.size();
            vector<vector<int>>answer;
        
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                int sum=target-nums[j]-nums[i];
                
                
                int start=j+1;
                int end=nums.size()-1;
                while(start<end)
                {
                    if(nums[start]+nums[end]<sum)
                    {
                       start++;
                      
                    }
                    else if(nums[start]+nums[end]>sum)
                    {
                        end--;
                    }
                    else
                    {
                         vector<int>quadrup(4,0);
                        quadrup[0]=nums[i];
                        quadrup[1]=nums[j];
                        quadrup[2]=nums[start];
                        quadrup[3]=nums[end];
                        answer.push_back(quadrup);
                        
            while(start<end&&nums[start]==quadrup[2])
            {
                start++;//processing the duplicates of 3rd number
            }
            while(start<end&&nums[end]==quadrup[3])
          {
          end--;    //processing the duplicate of 4th number              
          }
                    }
                }
                
                       
               while(j+1<n&&nums[j+1]==nums[j])// //processing the duplicate of 2nd number              
               {
                   j++;
               }
                
            }
            
            while(i+1<n&&nums[i+1]==nums[i])// //processing the duplicate of 1st number              
               {
                   i++;
               }
            
        }
        
        
       return answer; 
        
    }
};