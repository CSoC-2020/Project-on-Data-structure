class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int root=1;
        int n=digits.size();
        vector<int>answer;
        for(int i=n-1;i>=0;i--)
        {
           int sol=(root+digits[i]);
            answer.push_back(sol%10);
            root=sol/10;
        }
        while(root)
        {
            answer.push_back(root%10);
            root/=10;
        }
        reverse(answer.begin(),answer.end());
        return answer;
    }
};


