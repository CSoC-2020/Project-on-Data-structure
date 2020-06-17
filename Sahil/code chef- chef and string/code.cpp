#include<iostream>

using  namespace std;

int main()
{
    int t,c=0,i=0;
    cin>>t;
    while(t>0)
    {   i=0;
    c=0;
        string s="";
        cin>>s;
        while(i<s.size()-1){
            if(s[i]=='x' && s[i+1]=='y')
        {
            c+=1;
            i+=2;
        }
        else if(s[i]=='y' && s[i+1]=='x')
        {
            c+=1;
            i+=2;
        }
        else
        {
            i+=1;
        }
        }
        cout<<c<<endl;
        t-=1;
    }
    return 0;
}