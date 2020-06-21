class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
   vector<int> r;

int q2=0;
for(int i=0;i<nums1.size();i++)
{
  q2=0;
  int t=0;
  while(nums2[q2]!=nums1[i] && q2<nums2.size())
  {
    q2++;
  }
  for(int j=q2+1;j<nums2.size();j++)
  {
    if(nums2[j]>nums1[i])
    {
      t=1;
      r.push_back(nums2[j]);
      break;
    }
  }
  if(t==0)
  r.push_back(-1);
}

        return r;
    }
};