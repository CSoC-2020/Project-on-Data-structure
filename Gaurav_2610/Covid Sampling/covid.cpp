#include<bits/stdc++.h>
typedef unsigned  long long ll;

using namespace std;
 
int main() {
  
  ll t;
  cin >> t;
  
 while(t--)
 {
	 ll n,p;
	 cin >>n >>p;
	 ll arr[n][n];
	memset(&arr,0,sizeof(arr));
	 ll ans=0;
	 
	 for(int i =1; i<=n ;i++)
	 {
		  cout<< 1 <<" " << i << " "<< 1 << " "<< i << " " << n<<"\n";
		  cout.flush();
		  ll task;
		   cin>>task;
		   ll cnt=0;
		   
		   for(int j=1; j <= n ;j++)
		   {
			 cout<< 1 <<" " << i << " "<< j << " "<< i << " " << j<<"\n"; 
			 cout.flush();
			 ll x;
			 cin>>x;
			 if(x == -1){break;
			 }
			 if(x==1)
			 {
				 arr[i-1][j-1]=1;
				 cnt+=1;
			 }
			 if(cnt == task){
			 break;}
		   }
		  
	 }
	cout<<2<<"\n";
	for(long i=0;i<n;i++)
        {
            for(long j=0;j<n;j++)
            {
                cout<<arr[i][j]<<" ";
                cout.flush();
            }
            cout<<"\n";
        }
        ll x;
        cin>>x;
        if(x==-1)
        {
            break;
        } 
	 
	 
 }
	
   	
   	
}
  











