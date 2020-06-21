class Solution
{
public:
    
        int addDigits(int num)
        {
        if(num < 10) 
            return num;
        else
        {
            int sum = 0, dup = num ;
            while(dup)
            {
                int rem;
                rem=dup%10;
                sum =sum+ rem;
                dup=dup/10;
            }
            return addDigits(sum);
        }
        }
    
};