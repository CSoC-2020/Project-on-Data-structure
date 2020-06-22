class Solution
{
public:
    vector<int> getRow(int n)
    {
        vector<int>A;
        long long int c=1;
        n=n+1;
        for(int i=1;i<=n;i++)
        {
            A.push_back(c);
            c=c*(n-i)/i;   
        }
        return A;
    }
};