class Solution {
public
    vectorint smallerNumbersThanCurrent(vectorint& nums) {
    vectorintk;
    for(int i=0;inums.size();i++)
    {
        int count=0;
        for(int j=0;jnums.size();j++)
        {   
            if(nums[i]nums[j])
            count++;
        }
        k.push_back(count);    
    }
    return k;
    }
};