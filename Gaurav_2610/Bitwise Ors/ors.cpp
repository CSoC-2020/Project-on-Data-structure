class Solution {
public:
    int subarrayBitwiseORs(vector<int>& A) {
    
        
      unordered_set<int> res;
        unordered_set<int> cur;
        unordered_set<int> cur2;
        for (int a:A)
        {
            cur2 = {a};
            for (int c:cur)
            {
                cur2.insert(c | a);
            }
            cur = cur2;
            
            res.insert(cur.begin(), cur.end());
        }
        return res.size();
        
    }
};

