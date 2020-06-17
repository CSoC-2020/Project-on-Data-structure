class Solution {
public:
    vector<int> singleNumber(vector<int>& a) 
    {
        int x=a[0],b,x2=0,y=0;
        for(int i=1;i<a.size();i++)
            x^=a[i];
        b=x & ~(x-1);
        for(int i=0;i<a.size();i++)
            if(a[i] & b)
		x2^=a[i];
            else
		 y^=a[i];
        return {x2,y};
    }
};