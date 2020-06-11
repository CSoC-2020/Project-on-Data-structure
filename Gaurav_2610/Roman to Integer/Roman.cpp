class Solution {
public:
    int romanToInt(string s) {
        char left,right;
        int ans=0;
      int i=0;
        unordered_map<char,int>m;
        
         m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;
        while(i< s.size()-1)
        {
            int left=s[i];
            int right=s[i+1];
            
            if( m[left] < m[right])
            {
               ans += m[right] -m[left];
                i++; i++;
            }
            else
            {
                ans += m[left];
                i++;
            }
        }
        if(i != s.size()) ans+= m[s.back()];
        return ans;
    }
};


