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
   	int n,k;
   	cin>>n>>k;
   int sum1=0;
   int sum2=0;
   	    int v[1000000];
   	    for(int i=0;i<n;i++)
   	    cin>>v[i];
   	    int ans=0;
   	     for (int i = 0; i < n; i++) { 
    sum1 += v[i]; 
}
int sp=sum1;
      for(int i=0; i<n ; i++)
   	    {
   	        if(v[i] > k)
   	        {
   	            v[i] = k ;  
   	        }
   	        
   	        sum2  +=  v[i];
   	         
   	    }    
   	    
   	    
   	   cout<<abs(sp-sum2)<<"\n"; 
       
   	}
 return 0;    	
  }
  








