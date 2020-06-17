#include<bits/stdc++.h>
typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define pb push_back

const ll mod = (ll) 1e9+7;
 
using namespace std;
int main()
{

	ll n;  
	cin>>n;
	ll l=1,r=n;
	while(l<r)
	{
		ll res;
		res=l+(r-l)/2;
		cout<<res<< endl;
		char s;
		cin>>s;
		if(s=='G')
		{
			l=res+1;
		}
		else if(s=='L')
		{
			r=res-1;
		}
		else
		{
			exit(0);
		}
		cout<<res<<  endl;
		char temp;
		cin>>temp;
	}
	cout<<r<< endl;
	char still;
	cin>>still;
	if(still=='E')
	{
		exit(0);
	}
	
	l=1;  r=n;
	while(l<r)
	{
		ll res;
		res=l+(r-l)/2;
		cout<<res<< endl;
		char s;
		cin>>s;
		if(s=='G')
		{
			l=res+1;
		}
		else if(s=='L')
		{
			r=res-1;
		}
		else
		{
			exit(0);
		}
		cout<<res<<  endl;
		char temp;
		cin>>temp;
		if(temp=='E')
		{
			exit(0);
		}
	}
	cout<<r<<  endl;
	char joi;
	cin>>joi;
	if(joi=='E')
	{
		exit(0);
	}
	
}
