class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> s;
        for(int i=0;i<nums.size();i++)
        {
            s[nums[i]]+=1;
        }
        int k=0;
        for(map<int,int>::iterator itr=s.begin();itr!=s.end();itr++)
        {
            if((*itr).second>(nums.size()/2))
            {return (*itr).first;
        break;}}
    return k;}
};