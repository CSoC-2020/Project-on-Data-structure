#include<bits/stdc++.h>
typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define pb push_back

const ll mod = (ll) 1e9+7;
 
using namespace std;
 
int main() {
  IOS
  #ifdef gm
  freopen("int.txt", "r", stdin);
  #endif
  ll t;
  cin >> t;
  
  while (t--) {
  ll n;
   cin>>n;
   
   if(n%2 != 0)
   {
	   cout<<n/2<<endl;
   }
   else
   {
	   while(n!= 0)
	   {
		   if(n% 2 ==1)
		   {
			   break;
		   }
		   n=n/2;
	   }
	   if(n == 0) cout<< '0'<<endl;
	   else
	    cout<< n/2<<endl;
   }
}
   
	 
	
   	
 return 0;    	
}
  











