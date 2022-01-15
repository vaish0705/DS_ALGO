class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max_candy=-1;
        vector<bool>answer;
        
        for(int i=0;i<candies.size();i++)
        {
            max_candy=max(max_candy,candies[i]);
        }
        
        
        
        for(int i=0;i<candies.size();i++)
        {
            int  ans=candies[i]+extraCandies;
            if(ans>=max_candy)
            {
                answer.push_back(true);
                
            }
            else
            {
                answer.push_back(false);
            }
        }
        
        return answer;
    }
};