class Solution {
public:
    bool isUgly(int num) {
        if(num==0)
            return 0;
        else if(num==1)
            return 1;
        else
        {
            while(num%2==0)
                num/=2;
            while(num%3==0)
                num/=3;
            while(num%5==0)
                num/=5;
            if(num==1)
                return 1;
            else
                return 0;
        }
    }
};