#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        
   for (int i = 0, current = 0; i < A.size(); i++)
		if (A[i] % 2 == 0)
            
			swap(A[i], A[current++]);
	return A;
    }
};
