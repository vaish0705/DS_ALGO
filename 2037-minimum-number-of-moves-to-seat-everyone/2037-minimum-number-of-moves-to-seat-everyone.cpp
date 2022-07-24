class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        
        
        int n=seats.size();
        int moves=0;
        for(int i=0;i<n;i++)
        {
            int ans=abs(students[i]-seats[i]);
            moves+=ans;
         }
        
        return moves;
    }
};