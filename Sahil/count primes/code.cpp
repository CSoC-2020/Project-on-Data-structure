class Solution {
public:
    Solution()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    int countPrimes(int n) {
        vector<bool> nums={};
        nums.push_back(0);
        nums.push_back(0);
        for(int i=2;i<n;i++)
        {nums.push_back(1);
    }
        for(int i=2;i*i<=(n);i++)
        {if(nums[i]==1)
            {
            for(int j=i+i;j<n;j=j+i)
            {
                nums[j]=0;
            }
        }}
        int t=0;
        
        t=count(nums.begin(),nums.end(),1);
        return t;
    }
};