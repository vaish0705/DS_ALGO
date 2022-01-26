class Solution {
public:
    vector<int> countBits(int n) {
        
        
       /* In this solution, we can think about whether the number is even or odd.
If the number is even, the number of 1s is equal to the number which is half of it.
For e.g., the number 8 has the same 1s as the number 4.
The number 10 has the same amount of 1 bits as number 5.
That is because number i is just left shift by 1 bit from number i / 2.
Therefore, they should have the same number of 1 bits.

If the numbers are odd, e.g. 1, 3, 5, 7.
The number of 1 bits is equal to the number (i - 1) plus 1.
For e.g., for number 3, the number of 1 bits equals to the number 2 plus 1.
For number 11, it equals to number 10 + 1.

*/
        vector<int> res(n);
        res.push_back(0);  // for num=0
        if(n==0) return res;
        
        for(int i=1;i<=n;i++){
            if(i%2==0){
                res[i]=res[i/2];
            } else {
                res[i]=res[i-1]+1;
            }
        }
        return res;
    

        
        
        
        
    }
};