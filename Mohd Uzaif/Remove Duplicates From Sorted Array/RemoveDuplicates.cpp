class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)
        return nums.size();
        int i,j,c=1;
        for(i=0;i<nums.size()-1;i++)
        {
            for(j=i+1;j<nums.size();j++)
            {
                if(nums[i]!=nums[j])
                {
                    c++;
                    break;
                }
                else
                {
                    nums.erase(nums.begin()+j);
                    j--;
                }
            }
        }
        return c;
    }
};
