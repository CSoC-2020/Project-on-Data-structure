class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
      if(n<=1)
          return n;
int i=1;
int j=0;
for(i=1;i<n;i++)
{
if(nums[i]!=nums[i-1])
{
j++;
nums[j]=nums[i];
}
}
return j+1;
        
        
    }
};
