class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int,int> a;
        vector<int> x;
        for(int i=0;i<nums.size();i++)
        {
            a[nums[i]]++;
        }
        map<int,int>::iterator it;
        for(it=a.begin();it!=a.end();it++)
        {
            if(it->second==1)
                x.push_back(it->first);
                
        }
        return x;
    }
};