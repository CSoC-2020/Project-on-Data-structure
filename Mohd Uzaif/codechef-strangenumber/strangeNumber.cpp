#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int t;
   cin>>t;
    for(int i=0;i<t;i++)
    {
        int x,k;
        cin>>x>>k;
        int count=1;
        while(x%2==0)
        {
            count++;
            x=x/2;
        }
        for(int y=3;y<=sqrt(x) && x>=3;y=y+2)
        {
            while(x%y==0)
            {
                count++;
                x=x/y;
            }
        }
        if(count>=k)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
    return 0;
}