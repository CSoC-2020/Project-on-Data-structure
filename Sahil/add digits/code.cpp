class Solution {
public:
    int addDigits(int num) {
        int x,y;
        while(num>=10)
        {
            x=num/10;
            y=num%10;
            num=x+y;
        }
        return num;
    }
};