#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T){
	    int N,m;
	    long int profit = 0;
        cin>>N;
        long int nums[N];
        for(int i=0;i<N;i++)
            cin>>nums[i];

        sort(nums, nums+N, greater<int>());     //sorting in decreasing order to get the optimal solution

        for(int i=0;i<N;i++){
            m=P[i];
            if(m-i>0)
                profit=profit+(m - i);
	        }
        
        cout<<profit%1000000007<<"\n";
	T--;
	}
	return 0;
}