
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    long int t=0;
    cin>>t;
    while(t>0)
    { long int ts=0;
  cin>>ts;
  long int p=0;
  if(ts%2!=0)
  {
    p=(ts-1)/2;
    cout<<p<<endl;
  }
  else
  {if(ts<=2)
  {
      p=0;
  }
  else{    
    for(int i=2;i<=ts;i=i+2)
    {
      if(i%2==0)
      {
        int r=0;
        int q=0;
        r=i/2;
        q=ts/2;
        while((r%2==0) && (q%2==0))
        {
            r=r/2;
            q=q/2;
        }
        p+=(r%2==0 && q%2!=0)?1:0;
      }
      if(p==1)
      {
          p=ts/i;
          break;
      }
    }
      
  }
    cout<<p<<endl;
  }t--;}
  return 0;
}