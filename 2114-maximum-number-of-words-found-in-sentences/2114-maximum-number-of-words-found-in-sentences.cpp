class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
      int ans=INT_MIN;
        for(int i=0;i<sentences.size();i++)
        {
            string x=sentences[i];
              int count=0;
            int n=x.length();
            for(int j=0;j<n;j++)
            {
                
               if (x[j]==' ')
               {
                   count++;
               }
            }
            ans=max(ans,count+1);
        }
        return ans;
    }
     
    
};
  