class Solution {
public:
    int thirdMax(vector<int>& nums) {
       map<int,int> s;
      
        for(int i=0;i<nums.size();i++)
        {
            s[nums[i]]+=1;
        }
        int k=1;
        map<int,int>::reverse_iterator itr;
        for(itr=s.rbegin();itr!=s.rend();itr++)
        {
            if(k==3)
                return (*itr).first;
            k+=1;
        }
        itr=s.rbegin();
        return (*itr).first;
       

    }
};