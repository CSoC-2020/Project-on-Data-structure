class Solution {
public:
    int longestCommonSubsequence(string a, string b) {
        int A[b.size()+1][a.size()+1];
        for(int i=0;i<=b.size();i++)    A[i][0]=0;
        for(int i=0;i<=a.size();i++)    A[0][i]=0;
        
        int x=0,y=0;
        for(int i=1;i<=b.size();i++)
        {
            y=0;
            for(int j=1;j<=a.size();j++)
            {
               if(b[x]==a[y])
               {
                   A[i][j]=A[i-1][j-1]+1;
               }
                else
                {
                    A[i][j]=max(A[i-1][j],A[i][j-1]);
                }
                y++;
            }
            x++;
        }
        return A[b.size()][a.size()];
    }
};