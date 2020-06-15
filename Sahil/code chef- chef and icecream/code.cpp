

#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<bits/stdc++.h>

using namespace std;
int main()
{
  vector<string> q={};
  int t=0;
  cin>>t;


while(t>0)
{
 int nums5=0;
 int nums10=0;
 int nums15=0;
 vector<int> s={};
int n=0;
cin>>n;
for(int i=0;i<n;i++)
{
  int x;
  cin>>x;
  s.push_back(x);
}
int p=0;
for(int i=0;i<s.size();i++)
{
  if(s[i]==15)
  {
    if(nums10>=1)
    {
      nums10-=1;
      nums15+=1;
    }
    else if(nums5>=2)
    {
      nums5-=2;
      nums15+=1;
    }
    else
    {
      p=1;
      break;
    }
  }

  else if(s[i]==10)
  {
    if(nums5>=1)
    {
      nums5-=1;
      nums10+=1;
    }
    else
    {
      p=1;
      break;
    }
  }
  else if(s[i]==5)
  nums5+=1;
  if(p==1)
  break;
}
if(p==1)
q.push_back("NO");
else
q.push_back("YES");
t--;
}

for(int i=0;i<q.size();i++)
{
  cout<<q[i]<<endl;
}
  return 0;
}