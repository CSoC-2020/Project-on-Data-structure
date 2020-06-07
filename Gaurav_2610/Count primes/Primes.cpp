class Solution {
public:
    int countPrimes(int n) {
        
          bool* prime = new bool[n];
        memset(prime, true, n);
        if(n < 2)
            return 0;
        
        prime[0] = false;
        prime[1] = false;

        int m = sqrt(n);
        int count = 0;
        for (int i = 2; i <= m; i++)
        {
            if (prime[i])
            {
                for (int j = i * 2; j < n; j=j+i)
                {
                    prime[j] = false;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (prime[i])
            { 
                count++;
            }
        }
        return count;
    }
};
