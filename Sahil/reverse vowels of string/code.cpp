class Solution {
public:
    string reverseVowels(string s) {
        
            vector<int> nums={};
            vector<char> t={};
           for(int i=0;i<s.size();i++)
              {
                if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
                {
                  nums.push_back(i);
                  t.push_back(s[i]);
                }
              }
              reverse(t.begin(),t.end());
              for(int i=0;i<nums.size();i++)
              {
                s[nums[i]]=t[i];
              }
             return s;
        
    }
};