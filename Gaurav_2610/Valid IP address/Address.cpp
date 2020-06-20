class Solution {
public:
    string validIPAddress(string IP) {
        int cnt=0,cd=0;
        
        for(auto a:IP)
        {
            if(a == '.')
                cnt++;
            else if(a== ':')
                cd++;
        }
        if(cnt == 3 && validate4(IP))
            return "IPv4";
        else if(cd == 7 && validate6(IP))
            return "IPv6";
        else
            return "Neither";
        
        return "Neither";
        
      
        
    }
    bool validate4 (string s)
    {
        
        s.push_back('.');
        string t="";
        for(auto a:s)
        {
            if(a == '.')
            {
                if(t=="" || t.length() >=4 || t.compare("256") >= 0|| (t.length() != 1 && t[0] == '0'))
                {
                    return false; 
                }
                else
                    t="";
            }
            else
            {
                if(a <'0' || a >'9')
                    return false;
                t.push_back(a);
            }
        }
        return true;
    }
    bool validate6(string s)
    {
        s.push_back(':');
        string t="";
        for(auto a:s)
        {
            if(a== ':')
            {
               if(t== ""|| t.length() >=5)
                   return false;
                else
                    t="";
            }
            else
            {
                if((a>='a' &&a <='f')  || (a>= 'A' && a<= 'F' ) || (a>= '0' && a<= '9'))
                    t.push_back(a);
                else
                    return false;
            }
        }
        return true;
    }
};

