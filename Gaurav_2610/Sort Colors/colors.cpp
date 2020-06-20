#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
       int a, b, c;
        a = -1;
        b = -1;
        c = -1;
		// we make partitions in the array marked by a, b, c
        for (auto x: nums)
        {
            if (x == 0)
                a ++, b ++, c++, nums[c] = 2, nums[b] = 1, nums[a] = 0;
            else if(x == 1)
                b ++, c++, nums[c] = 2, nums[b] = 1;
            else if (x == 2)
                c ++, nums[c] = 2;
        }
    }
    
};
// Inplace Algo by partition rather than counting sort
