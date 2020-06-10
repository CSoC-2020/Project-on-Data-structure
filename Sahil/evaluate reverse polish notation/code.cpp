class Solution {
public:
    int evalRPN(vector<string>& nums) {
       stack<int> s;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]=="+")
            {
                int x=s.top();
                s.pop();
                int y=s.top();
                s.pop();
                s.push(x+y);
            }
            else if(nums[i]=="-")
            {
                int x=s.top();
                s.pop();
                int y=s.top();
                s.pop();
                s.push(y-x);
            }
            else if(nums[i]=="*")
            {
                int x=s.top();
                s.pop();
                int y=s.top();
                s.pop();
                s.push(x*y);
            }
            else if(nums[i]=="/")
            {
                int x=s.top();
                s.pop();
                int y=s.top();
                s.pop();
                s.push(y/x);
            }
            else
            {
                s.push(stoi(nums[i]));
            }
        }
        return s.top();
    }
};