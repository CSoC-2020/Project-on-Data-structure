class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_map<char,int>m;
        
        for(auto c:S)
        {
            if(m.count(c)==0)
                m[c]=1;
            else
                m[c]+=1;
        }
        int a=0;
        for(auto c:J)
        {
            if(m.count(c)!= 0 )
               a+= m[c];
        }
               return a;
    }
};

 
