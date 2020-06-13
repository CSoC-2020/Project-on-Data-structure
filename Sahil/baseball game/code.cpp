class Solution {
public:
    int calPoints(vector<string>& s) {
        int sum=0;
        stack<int> nums;
        for(int i=0;i<s.size();i++)
        {
             if(s[i]=="C")
    {
      sum-=nums.top();
      nums.pop();
    }
    else if(s[i]=="D")
    {
      sum+=2*nums.top();
      nums.push(2*nums.top());
    }
    else if(s[i]=="+")
    {
      int x=nums.top();
      nums.pop();
      int y=x+nums.top();
      nums.push(x);
      sum+=y;
      nums.push(y);
    }
    else
    {int x=stoi(s[i]);
    sum+=x;
    nums.push(x);
    }
        }
        return sum;
    }
};