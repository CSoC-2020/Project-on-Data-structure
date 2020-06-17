

#include<iostream>
#include<stack>
#include<string>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main()
{
int t=0;
cin>>t;
while(t>0)
{
  vector<int> nums;
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    nums.push_back(x);
  }
  int c=6;
  int y=0;
  for(int i=0;i<n;i++)
  {
    if(nums[i]==1 && c<6)
    {
      y=1;
      break;
    }
    else if(nums[i]==1 && c>=6)
    c=1;
    else
    c++;
  }
  if(y==1)
  cout<<"\nNO";
  else
  cout<<"\nYES";
  t--;
}
return 0;
}