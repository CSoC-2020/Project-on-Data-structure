class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       vector<int> p={};
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                p.push_back(i);
                break;
            }
        }
        if(p.size()==0)
            p.push_back(-1);
        for(int i=nums.size()-1;i>=0;i--)
            
        {
            if(nums[i]==target)
            {
                p.push_back(i);
                    break;
            }
        }
        if(p.size()==1)
            p.push_back(-1);
        return p;
    }
};