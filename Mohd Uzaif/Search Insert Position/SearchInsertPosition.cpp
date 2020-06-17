class Solution {
public:
    int searchInsert(vector<int>& a, int target) {
        int i =0;
        while(i<a.size())
        {
            if(a[i]>=target)    break;
            i++;
        }
        return i;
    }
};
