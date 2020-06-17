class Solution {
public:
    bool isPalindrome(int x) {
        if(x>0){
        long long temp=x,y=0;
        while(temp!=0)
        {
            y=y*10+temp%10;
            temp=temp/10;
        }
        if(x==y)    return true;
        else return false;
        }
        else if(x==0)   return true;
        else return false;
    }
};