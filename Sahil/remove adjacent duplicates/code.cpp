class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> nums;
        for(int i=0;i<s.size();i++)
        {
            if(nums.empty()==true)
            {
                nums.push(s[i]);
            }
            else if(nums.top()==s[i])
                nums.pop();
            else
                nums.push(s[i]);
        }
        vector<char> p={};
        while(nums.empty()!=true)
        {
            p.push_back(nums.top());
            nums.pop();
        }
        string r="";
        for(vector<char>::reverse_iterator itr=p.rbegin();itr!=p.rend();itr++)
        {
            r+=*itr;
        }
        return r;
    }
};