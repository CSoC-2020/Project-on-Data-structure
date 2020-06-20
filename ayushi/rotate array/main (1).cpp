class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        if(k==0)
            return;
        int n=nums.size();
        vector<int> arr(n,0);
       for(int i=0;i<n;i++)
       {
           int temp=(i+k)%n;
           arr[temp]=nums[i];
       }        
        for(int i=0;i<n;i++)
            nums[i]=arr[i];
    }
};