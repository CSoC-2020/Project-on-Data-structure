class Solution {
public:
    int heightChecker(vector<int>& heights) {
        
     vector<int> ans(heights);
        sort(ans.begin(),ans.end());
        int n=heights.size(),ret=0;
        for(int i=0; i<n; i++){
            if(ans[i] != heights[i]) ret++;
        }
        return ret;
    }
};
