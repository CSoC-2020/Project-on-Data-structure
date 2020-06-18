class Solution {
public:
    int longestCommonSubsequence(string s, string a) {
        int arr[a.size()+1][s.size()+1];
        for(int i=0;i<=a.size();i++)
 {
   for(int j=0;j<=s.size();j++)
   arr[i][j]=0;
 }
 int i=1,j=1,p=0,q=0;
 for(i=1;i<=a.size();i++)
 {q=0;
   for(j=1;j<=s.size();j++)
   {
     if(a[p]==s[q])
     {
       arr[i][j]=arr[i-1][j-1]+1;
     }
     else
     {
       arr[i][j]=max(arr[i-1][j],arr[i][j-1]);
     }
     q++;
   }
   p++;
 }
        return arr[a.size()][s.size()];
    }
};