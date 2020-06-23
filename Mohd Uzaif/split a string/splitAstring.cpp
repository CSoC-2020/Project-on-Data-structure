class Solution
{
public:
    int balancedStringSplit(string s)
    {
        int r = 0;
        int l = 0;
        int ans = 0, i = 0;
        while (i < s.length())
        {
            if (s[i] == 'L')
                l++;
            else
                r++;

            if (l == r)
            {
                ans++;
                l = 0;
                r = 0;
            }
            i++;
        }
        return ans;
    }
};