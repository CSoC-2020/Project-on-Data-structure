class Solution 
{
public:
    int longestCommonSubsequence(string text1, string text2)
    {
        
        int s1=text1.length();
        int s2=text2.length();
        int res[s1+1][s2+1];
        for(int i=0;i<=s1;i++)
        {
            for(int j=0;j<=s2;j++)
            {
                if(i==0|| j==0)  
                    res[i][j]=0;
                else if(text1[i-1]==text2[j-1])
                    res[i][j]=res[i-1][j-1]+1;
                else
                    res[i][j]=max(res[i-1][j],res[i][j-1]);
                    
            }
        }
        return res[s1][s2];
    }
};