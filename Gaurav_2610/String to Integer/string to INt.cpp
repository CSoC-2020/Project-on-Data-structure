#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Solution {
public:
    int myAtoi(string s) {
        
  if(s.empty()) return 0;
        
        ll num=0;
        
    ll i,sign=1;
        
        for(i=0;i<s.size();i++)
            
            if(s[i]!=' ') 
                break;
        
        if(i<s.size() && s[i]=='-') 
            sign=-1,i++;
        else if(i<s.size() && s[i]=='+') i++;
        
        while(i<s.size())
        {
            if(s[i]<'0' || s[i]>'9') break;
            
            num = num * 10 + s[i++]-'0';
            
            if(num*sign>INT32_MAX)
                return INT32_MAX;
            
            if(num*sign<INT32_MIN)
                return INT32_MIN;
            
        }
        
        return num*sign;
    }
};

