class Solution {
public:
    int change(int a, vector<int>& c) {
int nums[c.size()+1][a+1];
  for(int i=0;i<=c.size();i++)
  {
    for(int j=0;j<=a;j++)
    {
      nums[i][j]=0;
    }
  }
for(int i=0;i<=c.size();i++)
{
  nums[i][0]=1;
}
int k=0;
for(int i=1;i<=c.size();i++)
{
  for(int j=1;j<=a;j++)
  {
    if(j<c[k])
    {
      nums[i][j]=nums[i-1][j];
    }
    else
    {
      nums[i][j]=nums[i-1][j] + nums[i][j-c[k]];
    }
  }
  k++;
}
return nums[c.size()][a];
    }
};