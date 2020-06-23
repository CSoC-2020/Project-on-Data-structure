class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int> s;
        for(int i=0;i<nums.size();i++)
            s[nums[i]]+=1;
        vector<int> r;
        for(map<int,int>::iterator itr=s.begin();itr!=s.end();itr++)
        {
            if((*itr).second==2)
                r.push_back((*itr).first);
        }
        return r;
    }
};