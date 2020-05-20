#include<bits/stdc++.h>
typedef long long ll;
class Solution {
public:
    ll reverse(ll x) {
      
        long tmp = x;
        bool isNegative = (tmp < 0);
        if(isNegative)
            tmp = -tmp;
        long res = 0;
        while(tmp) {
            res = (res * 10) + (tmp%10);
            if(res > INT_MAX)
                return 0;
            tmp = tmp/10;
        }
        return (isNegative ? (0-res) : res);
    }
};

