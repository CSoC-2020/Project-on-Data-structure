class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
    map<int,int> s;
    for(int i=0;i<nums.size();i++)
    {
        s[nums[i]]+=1;
    }
        vector<int> temp;
        int i=1;
        map<int,int>::iterator itr=s.begin();
        while(i<=nums.size())
        {   
            if((*itr).first==i)
                itr++;
            else if((*itr).first!=i)
                temp.push_back(i);
            i+=1;
        }
    return temp;
    }
};