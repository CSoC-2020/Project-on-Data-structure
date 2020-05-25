class Solution {
public:
    int firstUniqChar(string s) {
        list<int>l;
        unordered_map<char,list<int>::iterator>mp;
        for(int i=0;i<s.length();i++)
        {
            if(!mp.count(s[i]))
            {
                l.push_back(i);
                mp[s[i]]=prev(l.end());
            }
            else if(mp[s[i]] != l.end())
            {
               l.erase(mp[s[i]]);
                mp[s[i]] = l.end();  
            }
        }
        return l.empty() ?-1:l.front();
        
    }
};




