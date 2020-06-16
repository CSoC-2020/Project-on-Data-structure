#include<bits/stdc++.h>
typedef  long long ll;
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
  int t;
  cin >> t;
  
  while (t--) {
   	
    	
   int n;
   cin>>n;
   int mp[n][n];
   ll ans=1;
   for(int i=0;i<n;i++)
   {
	   if(i & 1)
	   {
		   for(int j=n-1;j>=0 ;j--){
		   mp[i][j]=ans;
		   ans++;
		   }
		   	   }
		   	   else
		   	   {
				   for(int j=0;j<n ;j++)
				   {
					   mp[i][j]=ans;
					   ans++;
				   }
			   }
   }
    for(int i =0 ;i < n; i ++){
            for(int j = 0; j < n; j ++){
                cout << mp[i][j] << " ";
            }
            cout << "\n";
        }
    }
  
	 
	
   	
 return 0;    	
}
  











