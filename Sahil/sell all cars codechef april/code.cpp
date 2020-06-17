#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N,max;
	    long int profit = 0;
        cin>>N;
        long int nums[N];
        for(int i=0;i<N;i++)
            cin>>nums[i];

        sort(nums, nums+N, greater<int>());     //sorting in decreasing order

        for(int i=0;i<N;i++){
            max = nums[i];
            if(max - i > 0)
                profit = profit + (max - i);
        }
        
        cout<<profit%1000000007<<"\n";
	}
	return 0;
}