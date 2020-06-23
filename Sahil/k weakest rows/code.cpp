class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& nums, int k) {
         vector<int> p;
  for(int i=0;i<nums.size();i++)
  {
    p.push_back(count(nums[i].begin(),nums[i].end(),1));
  }

  map<int,int> r;
  for(int i=0;i<p.size();i++)
  {
    r[i]=p[i];
  }

  vector<int> t;
  priority_queue<int> pq(p.begin(),p.end());
  while(pq.empty()!=true)
  {
    for(map<int,int>::reverse_iterator itr=r.rbegin();itr!=r.rend();itr++)
    {
      if((*itr).second==pq.top())
      {
        t.push_back((*itr).first);
        (*itr).second=-1;
      }
    }
    pq.pop();
  }
        vector<int> l;
        int x=t.size()-1;
        while(k>0)
        {
            l.push_back(t[x]);
            x--;
            k--;
        }
        return l;
    }
};