#include <iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s;
        int j=0,ans=0;
        cin>>s;
        while(j<s.length())
        {
            if(s[j]=='x' && s[j+1]=='y')
                {
                    ans++;
                    j+=2;
                }
            else if(s[j]=='y' && s[j+1]=='x')
                {
                    ans++;
                    j+=2;
                }
            else
                j++;
        }
        cout<<ans<<endl;
    }
 
      
        
    return 0;
}
