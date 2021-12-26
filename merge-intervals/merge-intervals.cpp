class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>>mergeinterval;
        
        if(intervals.size()==0)
        {
            return mergeinterval;
        }
         sort(intervals.begin(),intervals.end());
        vector<int>temp=intervals[0];//[[1,3],[2,6],[8,10],[15,18]]//storing first vector 1,3 in temp vector
       
        
        for(auto it:intervals)
        {
            if(it[0]<=temp[1])//1<3=>2<3=>8<6
               {
                  temp[1] =max(temp[1],it[1]);
               }
            else
            {
                mergeinterval.push_back(temp);
                temp=it;
            }
        }
        
        
        
        
         mergeinterval.push_back(temp);
        return mergeinterval;
        
        
    }
};