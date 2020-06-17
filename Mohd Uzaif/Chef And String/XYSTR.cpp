#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        int j=0,count=0;
        while(j<s.size())
        {
            if(s[j]=='x' && s[j+1]=='y')
            {count++;j+=2;}
            else if(s[j]=='y' && s[j+1]=='x')
            {count++;j+=2;}
            else
            {
                j++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
