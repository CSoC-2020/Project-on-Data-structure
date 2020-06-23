class Solution {
public:
    bool lemonadeChange(vector<int>& nums) {
        map<int,int> s;
  s[5]=0;
  s[10]=0;
  s[15]=0;
  for(int i=0;i<nums.size();i++)
  {
    if(nums[i]==20)
    {
      s[nums[i]]+=1;
      s[10]-=1;
      s[5]-=1;
      if(s[10]<0)
      {
        s[10]=0;
        s[5]-=2;
        if(s[5]<0)
        {return 0;
        }
      }
      else if(s[5]<0)
      {return 0;
      }
    }

    else if(nums[i]==10)
    {
      s[10]+=1;
      s[5]-=1;
      if(s[5]<0)
      {return 0;
      }
    }
    else
    s[5]+=1;
  }
        return 1;
    }
};