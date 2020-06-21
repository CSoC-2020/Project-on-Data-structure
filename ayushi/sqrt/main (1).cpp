class Solution {
public:
    int mySqrt(int x) {
        if(x <= 1)
            return x;
        int low = 0, high = ceil(x / 2);
        
        while(low < high) {
            
            int mid = low + (high - low + 1) / 2;
            long long sq = (long long)mid * mid;
            if(sq <= x)
                low = mid;
            else
                high = mid - 1;
        }
        
        return low;
    }
};