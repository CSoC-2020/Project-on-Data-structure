class Solution {
public:
    void rotate(vector<vector<int>>& nums) {
     
        vector<vector<int>> temp(nums);
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums[0].size();j++)
            {
                temp[j][i]=nums[i][j];
            }
        }
        
        for(int i=0;i<temp.size();i++)
        {
            int j=0;
            int k=temp[0].size()-1;
            while(k>=0)
            {
                nums[i][j]=temp[i][k];
                k-=1;
                j+=1;
            }
        }
        
    }
};