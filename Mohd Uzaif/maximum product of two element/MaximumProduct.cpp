class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int m = 0, sm = 0;
        for (int n:nums){
            if (n>m){
                sm = m;
                m = n;
            }
            else if (n>sm){
                sm = n;
            }
        }
        return (m-1)*(sm-1);
    }
};