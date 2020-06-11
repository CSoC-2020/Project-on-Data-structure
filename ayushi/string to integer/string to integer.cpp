class Solution {
public:
    int myAtoi( string s)
    {
        int i=0,sign=1;
        while(s[i]==' ')
            i++;
        if(s[i]=='+') 
            i++;
        else if(s[i]=='-')
        {
            i++;
            sign=-1;
        }
        long long num=0;
        while(i<s.size() && isdigit(s[i]) &&num<INT_MAX)
        {
            num=(num*10)+(s[i]-48); 
            i++;
        }
        num*=sign;
        if(num<INT_MIN)
            return INT_MIN;
        else if(num>INT_MAX)
            return INT_MAX;
        else
            return num;
    }
};
