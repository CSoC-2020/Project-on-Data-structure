class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> s;
        vector<int> p;
        for(int i=0;i<nums.size();i++)
        {
            s[nums[i]]+=1;
        }
        for(map<int,int>::iterator itr=s.begin();itr!=s.end();itr++)
        {
            if((*itr).second>nums.size()/3)
                p.push_back((*itr).first);
        }
        return p;
    }
};