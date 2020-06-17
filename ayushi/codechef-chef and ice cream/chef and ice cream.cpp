#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,five=0,ten=0,fifteen=0;
        bool flag=true;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int i=0;i<n;i++)
        {
            if(arr[i]==5)
            {
                five++;
            }
            else if (arr[i]==10)
            {
                if(five==0)
                    {
                        cout<<"NO"<<endl;
                        flag=false;
                        break;
                    }
                else
                    {
                        ten++;
                        five--;
                    }
            }
            else
            {
                if(ten==0 && five<2)
                {
                    cout<<"NO"<<endl;
                    flag=false;
                    break;
                }
                
                else if(five>=2)
                {
                    five-=2;
                    fifteen++;
                }
                else
                {
                    ten--;
                    fifteen++;
                }
            }
        }
        if(flag)
            cout<<"YES"<<endl;
    }

    return 0;
}
