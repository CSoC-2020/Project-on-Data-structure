class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s;
        for(auto i:nums)
            s.insert(i);
        set<int>::iterator it;
        it=s.begin();
        if(s.size()>=3)
        {
            for(int i=0;i<s.size()-3;i++)
                it++;
            return *it;
        }
        else if(s.size()==2)
        {
            for(int i=0;i<s.size()-1;i++)
                it++;
            return *it;
        }
        else    return *it;
    }
};