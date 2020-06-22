class Solution {
public:
    int pivotIndex(vector<int>& nums) {
         int l=0,r=0;

 for(int i=0;i<nums.size();i++)
 r+=nums[i];
 cout<<"\n"<<r;

 for(int i=0;i<nums.size();i++)
 {cout<<"\n\nright :-> "<<r<<"\nleft:-> "<<l;
   r-=nums[i];
   if(r==l)
   {
     return i;
   }
    l+=nums[i];
 }
        return -1;
    }
};