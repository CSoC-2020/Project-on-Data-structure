class Solution {
public:
    
   static bool compare(vector <int> a, vector <int> b){
       
   if(a[0] == b[0])
       return a[1] > b[1];
      return a[0] < b[0];
}
    vector<vector<int>> reconstructQueue(vector<vector<int>>& p) {
        
       sort(p.begin(), p.end(), compare);
        
      vector < vector <int> > ans;
        
      for(int i = p.size()-1; i>=0; i--)
      {
         ans.insert(ans.begin() + p[i][1], p[i]);
      }
      return ans;  
        
        
    }
};
