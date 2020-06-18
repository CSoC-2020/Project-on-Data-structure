class Solution {
public:
    int hIndex(vector<int>& citations) {
        
        int n=citations.size();
        sort(citations.begin(),citations.end());
        int l=0,r=n-1,mid;
        while(l <= r)
        {
            mid =(l+r) >>1;
            if(citations[mid] == (n-mid))
                return citations[mid];
            else if(citations[mid] > (n-mid))
                r=mid-1;
            else
                l=mid+1;
            
            
            
            }
        return n-(r+1);
        
        
    
    
    
    
    }
};

