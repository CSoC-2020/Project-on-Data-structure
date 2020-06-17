class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        
     int n=arr.size();
    
         sort(arr.begin(),arr.end());
        
     int median=(arr.size()-1)/2;
    median=arr[median];
        
        sort(arr.begin(),arr.end(),[median] (int&a ,int &b)
             {
                 
                 if(abs(a-median) == abs(b-median))
                 {
                     return a>b;
                 }
                 return abs(a-median) >abs(b-median);
             });
        vector<int>res(k,0);
        
        
      for(int i=0;i<k;i++)
      {
          res[i]=arr[i];
      }
        return res;
    }
};
