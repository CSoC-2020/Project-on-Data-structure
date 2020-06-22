class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
vector<int> a,b,c;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
                a.push_back(nums[i]);
            else
                b.push_back(nums[i]);
        }
        for(int i=0;i<a.size();i++)
        {
            c.push_back(a[i]);
            c.push_back(b[i]);
        }
        return c;
    }
};