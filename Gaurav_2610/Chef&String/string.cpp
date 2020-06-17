#include<bits/stdc++.h>
typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define pb push_back
const  ll MAX = 256; 
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
   	
        string s;
        cin >> s;
        int n=s.length();
        int ans=0;
        int i=0;
        for(i=0;i<n-1;i++)
        {
			if( (s[i] == 'x' && s[i+1] == 'y' ) || (s[i] == 'y' && s[i+1] == 'x'))
			{
				ans+=1;
				i+=2;
			}
			else
			i+=1;
		}
		cout<< ans <<"\n";
        
        
        
  
       
      }
        return 0;    	
}
  









