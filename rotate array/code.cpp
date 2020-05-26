class Solution {
public:
    vector<int> rotate(vector<int>& nums, int k) 
    {
int s=k%nums.size();
vector<int> temp(nums);

        nums.insert(nums.begin(),temp.end()-s,temp.end());
        nums.erase(nums.end()-s,nums.end());
return nums;        
}};