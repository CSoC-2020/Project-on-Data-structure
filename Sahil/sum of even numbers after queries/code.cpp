class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& s) {
int sum=0;
        for(int i=0;i<nums.size();i++)
        {if(nums[i]%2==0)
            sum+=nums[i];
        }
            vector<int> t;
        t.push_back(sum);
        vector<int> r;
        for(int i=0;i<s.size();i++)
        {
            int y=t[t.size()-1];
    if(nums[s[i][1]]%2==0)
    y-=nums[s[i][1]];
    nums[s[i][1]]+=s[i][0];
    if(nums[s[i][1]]%2==0)
    y+=nums[s[i][1]];
    t.push_back(y);
    r.push_back(y);
        }
        return r;
    }
};