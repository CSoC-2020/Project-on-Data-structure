#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

#define fastIO()                 \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

inline string getString(void)
{
    char x[1000005];
    scanf("%s", x);
    return (string)x;
}

int main()
{
    fastIO();
    lli test;
    cin>>test;
    while(test--){
       lli n;cin>>n;
       lli a[n];
       lli c5=0,c10=0,c15=0;
       for(int i=0;i<n;i++)cin>>a[i];
       
       int f=0;
       for(int i=0;i<n;i++){
           if(a[i]==5)
           {
               c5++;
           }else if(a[i]==10 && c5>=1)
           {
               c10++;c5--;
           }else if(a[i]==15 && c10>=1)
           {
               c15++;
               c10--;
           }else if(a[i]==15 && c5>=2)
           {
               c15++;
               c5-=2;
           }else
           {
               f=-1;
               break;
           }
       }
       if(f==-1)cout<<"NO\n";
       else cout<<"YES\n";
       
    }
    return 0;
}