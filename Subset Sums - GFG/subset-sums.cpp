// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    void sum(int i,int N,vector<int>&arr,vector<int>&ans,int s)
    {
        if(i==N)
        {
            ans.push_back(s);
            return;
        }
        
        
        
        
       s+=arr[i];
        sum(i+1,N,arr,ans, s);
        s-=arr[i];
        
        
        sum(i+1,N,arr,ans,s);
        
        
        
    }

    vector<int> subsetSums(vector<int> arr, int N)
    {
        
        
        vector<int>ans;
        
        sum(0,N,arr,ans,0);
      sort(ans.begin(),ans.end());  
        return ans;
        
        
        // Write Your Code here
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends