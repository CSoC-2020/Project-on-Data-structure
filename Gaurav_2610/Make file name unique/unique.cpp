#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> getFolderNames(vector<string>& names) {
        

        unordered_map<string, int> mp;
        
        vector<string> op;
        
        for(auto name : names) 
        {
            string val = name;
            int i = mp[val];
            
            while(mp[val] > 0) 
            {
                val = name + "(" + to_string(i++) + ")";
                mp[name] = i;
            }
            mp[val]++;
            op.push_back(val);
        }
        return op;
        
    }
};
