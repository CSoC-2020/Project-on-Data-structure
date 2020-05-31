class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    if(k>nums.size())
    {
        k=k%nums.size();
    }

    for(int i=0,j=nums.size()-1;i<j;i++,j--)
    {
        int temp;
        temp=nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
    }
    for(int i=0,j=k-1;i<j;i++,j--)
    {
        int temp;
        temp=nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
    }
    for(int i=k,j=nums.size()-1;i<j;i++,j--)
    {
        int temp;
        temp=nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
    }
    }
};
