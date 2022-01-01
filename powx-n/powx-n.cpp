class Solution {
public:
    double myPow(double x, int n) {
        
        if(n==0)
        {
            return 1;
        }
       
         if(n<0 && n%2==0)
        {
           double small_ans=myPow(x,n/2);
            small_ans*=small_ans;    
            
       return small_ans;
        }
        else if(n<0&& n%2!=0)
        {
           double small_ans=myPow(x,n/2);
            small_ans*=small_ans;  
              return small_ans*1/x;
        }
     
        
       else  if(n%2==0 && n>0)
        {
           double small_ans=myPow(x,n/2);
            small_ans*=small_ans;  
            return small_ans;
        }
        else
        {
              double small_ans=myPow(x,n/2);
            small_ans*=small_ans; 
        return small_ans*x; 
        }
    }
};