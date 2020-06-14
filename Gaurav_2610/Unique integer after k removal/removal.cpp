class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        
        
      unordered_map<int, int> freq;
        for(auto x:arr) freq[x]++;
        vector<int> vec;
        for(auto x:freq)
            vec.push_back(x.second);
        
        sort(vec.rbegin(), vec.rend());
        
        int remain=arr.size()-k;
        int total=0, uniq=0;
        for(auto e:vec){
            if(total>=remain) break;
            total+=e;
            uniq++;
        }
        return uniq;
    }
};
