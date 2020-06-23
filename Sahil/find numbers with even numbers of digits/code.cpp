class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++)
        {int c=0;
            while(nums[i]!=0)
            {
                c++;
                nums[i]/=10;
            }
         if(c%2==0)
             count++;
        }
        return count;
    }
};