class Solution {
public:
    bool isHappy(int n) {
    while(1)
    {
        cout<<n<<endl;
        if(n==4 || n==37)
        {
            return false;
        }
        else if(n==1)
        {
        	return true;
		}
        int sum=0;
        while(n!=0)
        {
            sum=sum+(n%10)*(n%10);
            n=n/10;
        }
        n=sum;
    }
    }
};
