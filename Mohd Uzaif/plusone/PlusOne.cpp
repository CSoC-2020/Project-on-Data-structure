class Solution {
public:
    vector<int> plusOne(vector<int>& nums) {
       
        int carry=0,sum=0;
        int a=nums[nums.size()-1]+1;
        sum=a%10;
        carry=a/10;
        nums[nums.size()-1]=sum;
        if(carry!=0)
        {
            for(int i=nums.size()-2;i>=0 && carry!=0;i--)
            {
                a=nums[i]+carry;
                sum=a%10;
                nums[i]=sum;
                carry=a/10;
            }
        }
        if(carry!=0)
        {
            nums.insert(nums.begin(),carry);
        }
        return nums;
    }
};
