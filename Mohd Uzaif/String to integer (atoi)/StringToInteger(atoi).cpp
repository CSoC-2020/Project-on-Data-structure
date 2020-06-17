class Solution {
public:
    int myAtoi(string str) {
        long n=0,sign=1;
        int i=0;
        while(str[i]==' ')
        {i++;}
        if(str[i]=='+')     {i++;}
        else if(str[i]=='-')     {sign=-1;i++;}
    
        while(str[i]>=48 && str[i]<=57)
        {
            n=n*10+(int(str[i])-48);
            if(n>INT_MAX && sign==1)    return INT_MAX;
            if(n>INT_MAX && sign==-1)    return INT_MIN;
            i++;
        }
        return n*sign;
    }
};  
