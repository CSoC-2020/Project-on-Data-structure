#include<iostream>
using namespace std;
int main()
{
int t,n;
cin>>t;
while(t--)
{
    cin>>n;
    int value=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i%2==0)
           {
               cout<<value;
            value++;
           }
           else
           {
               cout<<value;
               value--;
           }
        }
        
    }
}
return 0;
}