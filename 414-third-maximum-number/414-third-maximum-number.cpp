class Solution {
public:
    int thirdMax(vector<int>& nums) {
       
    set<int>st(nums.begin(),nums.end());
        
        return st.size()<3?*max_element(st.begin(),st.end()):*next(st.begin(),st.size()-3);
        
       // return n;
        
        
        
        
        
        
    }
        
        
        
        
};