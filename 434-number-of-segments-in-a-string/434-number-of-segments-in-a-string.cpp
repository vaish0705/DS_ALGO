class Solution {
public:
    int countSegments(string s) {
        int seq=0;
      
        for(int i=0;i<s.size();i++)
        {
            if((i==0||s[i-1]==' ')&& s[i]!=' ')
            {
                seq++;
            }
        }
        return seq;
    }
};