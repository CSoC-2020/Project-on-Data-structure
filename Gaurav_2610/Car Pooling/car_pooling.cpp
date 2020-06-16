class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        
   map<int,int>mp;
        
    for(auto i:trips)
    {
        mp[i[1]] += i[0];
        mp[i[2]] -= i[0];
    }
        int cnt=capacity;
        
        for(auto item :mp){
            cnt -= item.second;
            if(cnt<0)
            return false;
        }
        return true;
        
    }
};

