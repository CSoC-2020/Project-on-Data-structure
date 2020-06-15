

#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> s={};
  int t=0;
  int n=0;
  int k=0;
  cin>>t;
  
  while(t>0)
  {vector<int> p={};
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {int x=0;
    cin>>x;
      p.push_back(x);
    }
    
    int sum=0;
    sum=accumulate(p.begin(),p.end(),sum);
    
    for(int i=0;i<p.size();i++)
    {
      if(p[i]>k)
      p[i]=k;
    }
    int sum1=0;
    
    sum1=accumulate(p.begin(),p.end(),sum1);
    s.push_back(sum-sum1);
    t-=1;
  }
  
  for(int i=0;i<s.size();i++)
  {
    cout<<s[i]<<endl;
  }
  return 0;
}