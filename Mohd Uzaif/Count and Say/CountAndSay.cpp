class Solution {
public:
    string AnotherFunction(string s)
    {
        string res="";
        if(s==""){res="1";}
        else{
        int i=0,count=0,index=0;
        while(i<s.size())
        {
            if(s[i]==s[index])  {count++;i++;}
            else {res.push_back(count+48);res.push_back(s[index]);index=i;/*i++;*/count=0;}
        }
        if(i>0) {res.push_back(count+48);res.push_back(s[index]);}
        }
        return res;
    }
    string countAndSay(int n) {
        string s="";
        for(int i=0;i<n;i++)
        {
            s=AnotherFunction(s);
        }
        return s;
    }
};
