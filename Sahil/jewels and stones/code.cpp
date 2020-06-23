class Solution {
public:
    int numJewelsInStones(string J, string S) {
      int c=0;
        for(int i=0;i<J.size();i++)
        {
            for(int j=0;j<S.size();j++)
            {
                if(J[i]==S[j])
                    c++;
                else
                    continue;
            }
        }
        return c;
    }
};