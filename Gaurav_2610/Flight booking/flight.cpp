class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        
      vector<int>ans(n+1, 0);
        
        int start,end,booked;
        
        for(int i=0;i<bookings.size(); i++)
        {
             start=bookings[i][0] -1 ;
             end= bookings[i][1];
            
                            
            booked = bookings[i][2];
            ans[start] += booked;
            
            ans[end]   += -booked;
        }
        
        for(int i=1;i< ans.size() ;i++)
        {
            ans[i] += ans[i-1];
        }
                            
        ans.pop_back();
        return ans;
        
         
    }
};


