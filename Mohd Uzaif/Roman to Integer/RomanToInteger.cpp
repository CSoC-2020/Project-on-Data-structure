class Solution {
public:
    int dict(const char c) {
        switch(c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
        }
        return 0;
    }
    int romanToInt(string s) {
        int decimal = 0;
        int summit = 0;
        auto begin = s.cbegin();
        for(auto x = s.cend() - 1; x >= begin; --x) {
            int n = dict(*x);
            if(n >= summit) {
                summit = n;
                decimal += n;
            } else {
                decimal -= n;
            }
        }
        return decimal;
    }
};