class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>::iterator it;
        for(it=nums.begin();it!=nums.end(); ){           
            if((*it)==val)               
                nums.erase(it);
            else
                it++;            
        }
        
        return nums.size();
    }
};