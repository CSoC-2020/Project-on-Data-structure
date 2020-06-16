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
  int t;
  cin >> t;
  
  while (t--) {
   	
   int n;
   cin>>n;
   
   bool flag = true;
   int *vc=new int[n];
   
   
   for(int i=0;i<n;i++)
   cin>>vc[i];
   
   bool case1=false;
   
   for(int i=0;i<n;i++)
   {
	   if(vc[i] == 15)
	     case1= true;
   }
   
   if(vc[0] != 5)
   {
	   cout<<"NO\n";
   continue;
}
 else
 {
     if(case1 == true){

                int count = 0;

                for(int i = 0; i <n ;i ++){
                    int temp = vc[i] - 5;
                    temp = temp / 5;

                    if(count >= temp){
                        count = count - temp;
                    }else{
                        flag = false;
                        break;
                    }
                    count = count + 1;
                }

            }
            else{
	 int count1 = 0, count2 = 0;

                count1 ++;

                for(int i =1 ;i< n ; i++){
                    if(vc[i] == 5){
                        count1 ++;
                    }else{
                        if(vc[i] == 10){
                            if(count1 == 0){
                                flag = false;
                                break;
                            }else{
                                count1 --;
                                count2 ++;
                            }
                        }else{
                            if(count2 == 0){
                                    flag = false;
                            break;
                            }else{
                                count2 --;
                            }
                        }
                    }
                }
 }
 }

 if(flag == true)
 cout<<"YES\n";
 else
 cout<<"NO\n";

	 
	}
   	
 return 0;    	
}
  










