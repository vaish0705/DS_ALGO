class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       int i=0,j=0,k=0;
    int n=nums1.size();
        int m=nums2.size();
        
        int ans[m+n];
        while(i<n && j<m)
        {
            
            if(nums1[i]<=nums2[j])
            {
                ans[k++]=nums1[i++];
            }
            else
            {
                ans[k++]=nums2[j++];
            }
            
            
        }
        
        while(i<n)
        {
            ans[k++]=nums1[i++];
        }
             
        
          while(j<m)
         {
            ans[k++]=nums2[j++];
         }
            
         // int s=0;
         // int e=ans.size()-1;
        // int mid=(m+n)/2;
       //  double median=(ans[mid]+ans[mid+1])/2;
        
     /*   if((m+n)%2==0)
        {
          
           
         return (double) median;
            
        }
        
         return (double)ans[mid];
        
        
        
        */
        
        
        
        
       
          
        if((m+n)%2 != 0)
            return (double)ans[(m+n)/2];
        else 
            return (double)(ans[((m+n) - 1) / 2] + ans[(m+n) / 2]) / 2.0;
        
        
        
        
        
        
        
        
        
        
        
     /*   
        
        
        
         int m = nums1.size(),n = nums2.size();
        int temp[m+n];
        int i = 0,j = 0,k = 0;
        while(i<m && j<n)
        {
            if(nums1[i] <= nums2[j])
                temp[k++] = nums1[i++];
            else 
                temp[k++] = nums2[j++];
        }
        
        while(i<m)
            temp[k++] = nums1[i++];
        
        while(j<n)
            temp[k++] = nums2[j++];
        
        if((m+n)%2 != 0)
            return (double)temp[(m+n)/2];
        else 
            return (double)(temp[((m+n) - 1) / 2] + temp[(m+n) / 2]) / 2.0;
        
        
        
        */
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
        
};