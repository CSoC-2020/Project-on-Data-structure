class Solution 
{
public:
    vector<vector<int>> generate(int nums) 
    {
        
        vector<vector<int>>q1;
        vector<vector<int>>q2{{1}};
        vector <vector<int>> final1{{1},{1,1}};
        if(nums==0)
            return q1;
        
        if(nums==1)
            return q2;
        
        
        for(int i=0;i<nums-2;i++)
        {   
            vector<int>temp;
            temp.push_back(1);
          int  m=final1.size()-1;
            for(int j=0;j<final1[m].size()-1;j++)
            {
                temp.push_back(final1[m][j]+final1[m][j+1]);
            }
            temp.push_back(1);
            final1.push_back(temp);
        }
        return final1;
    }
};