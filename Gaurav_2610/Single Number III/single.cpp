class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        int n=nums.size();
      int Xor=0;
        for(int i=0;i<n;i++)
        {
            Xor ^= nums[i];
        }
        int mask=1;
        while(1)
        {
            if((mask & Xor ) == 0)
            {
                mask =mask << 1;
            }
            else
                break;
        }
        int a=0;int b=0;
        for(int i=0;i<n;i++)
        {
            if((nums[i] & mask) == 0)
            {
                a^= nums[i];
            }
            else
            {
                b^= nums[i];
            }
        }
        return {a,b};
    }
};


