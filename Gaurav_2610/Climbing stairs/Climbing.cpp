class Solution {
public:
  
    int climbStairs(int n) {
        int a = 1;
        int b = 2;
        int c;
        if(n == 1 or n==2){
            return n;
        }
        for(int i =3;i<=n;i++){
            c = a+b;
            a = b;
            b = c;
        }
        return c;
        }
        
    
};
