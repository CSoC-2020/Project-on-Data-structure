
class Solution {

    int f(int n)
    {
        int sum=0;
        while(n)
        {
        int digit=n%10;
            n/=10;
            sum+=digit*digit;
        }
        return sum;
        
    }
   public:
    bool isHappy(int n) {
        unordered_set<int>mp;
        
        while(true)
        {
            if(n==1){
                return true;
            }
            
          n=f(n);
     if(mp.count(n)==1)
         return false;
        
      mp.insert(n);  
        }
    }
};
