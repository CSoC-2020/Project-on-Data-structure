class Solution {
public:
    int minAddToMakeValid(string s) {
      stack<char> nums;
        int k=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
                nums.push('(');
            else
            {
                if(nums.empty()!=true)
                    nums.pop();
                else
                    k++;
            }
        }
        while(nums.empty()!=true)
        {
            k++;
            nums.pop();
        }
        return k;
    }
};