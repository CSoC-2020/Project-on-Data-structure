class Solution {
public:
    vector<int> sortArray(vector<int> nums) {
        if (nums.size()<2) return nums;
        vector<int> pre = sortArray(vector<int>(nums.begin(), nums.begin()+nums.size()/2));
        vector<int> post = sortArray(vector<int>(nums.begin()+nums.size()/2, nums.end()));
        vector<int> res;
        int i=0, j=0;
        while (i<pre.size() && j<post.size()) {
            if (pre[i]<post[j]){
                res.push_back(pre[i]);
                i++;
            }else{
                res.push_back(post[j]);
                j++;
            }
        }
        for (int ind=i; ind<pre.size(); ind++){
            res.push_back(pre[ind]);
        }
        for (int ind=j; ind<post.size(); ind++){
            res.push_back(post[ind]);
        }
        return res;
    }
};
