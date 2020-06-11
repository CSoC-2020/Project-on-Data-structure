

class Solution
{
public:
    bool isPowerOfThree(int n)
    {
        if(n==0)
        {
            return false;
        }
        if(n==1)
        {
            return true;
        }
        else
        {
        float temp=(log10(n)/log10(3));
        
        if(pow(3,temp)==n)
    
        {
            return true;
        }
        return false;
    }}
};