class Solution {
public:
    int maxArea(vector<int>& height) {
        
        
        //1 8 6 2 3 4 8 3 7
          //so the basic logic is we need to find the max area of rectangle which can store water
        //we can store wATER according to min height 
        // if we hv only 1 8 thn we can store upto 1 height only otherwise it will sytart to overflow and spill
        int n=height.size();
        
        int max_water=0;
        /*for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                max_water=max(max_water,min(height[i],height[j])*(j-i));
            }
        }
          */  
        int i=0;int j=n-1;
        while(i<j)
        {
            int h=min(height[i],height[j]);
            max_water=max(max_water,h*(j-i));
            while(height[i]<=h && i<j)
            {
                i++;
            }
            while(height[j]<=h&&i<j)
            {
                j--;
            }
            
        }
        
        
        return max_water;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};