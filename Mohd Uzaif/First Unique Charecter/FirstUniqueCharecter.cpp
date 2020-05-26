class Solution {
public:
    int firstUniqChar(string s) {
        
        int arr[26]={0};
        for(char c:s)
        {
            arr[c-'a']++;
        }
        char x=0;
        for(int i=0;i<s.size();i++)
        {
            if(arr[s[i]-'a']==1)
                return i;
        }
        return -1;
    }
};
