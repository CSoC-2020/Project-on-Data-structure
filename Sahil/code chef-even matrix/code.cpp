

#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t=0;
    cin>>t;
    while(t>0){
    int d=0;
  cin>>d;
  int nums[d][d];

  int i=0;
  int j=0;
  int k=1;
  while(i<d)
  {
    if(i%2==0)
    {
      j=0;
      while(j<d)
      {
        nums[i][j]=k;
        k++;
        j++;
      }
    }
    else
    {
      j=d-1;
      while(j>=0)
      {
        nums[i][j]=k;
        k++;
        j--;
      }
    }
    i++;
  }
  for(int i=0;i<d;i++)
  {
    for(int j=0;j<d;j++)
    {
      cout<<nums[i][j]<<"\t";
    }
    cout<<endl;
  }
  t--;}

  return 0;
}