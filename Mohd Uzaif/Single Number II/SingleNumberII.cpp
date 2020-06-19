class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> a;
        for(int i=0;i<nums.size();i++)
        {
            a[nums[i]]++;
        }
        map<int,int>::iterator it;
        for(it=a.begin();it!=a.end();it++)
        {
            if(it->second==1)
                return it->first;
        }
        return 0;
    }
};