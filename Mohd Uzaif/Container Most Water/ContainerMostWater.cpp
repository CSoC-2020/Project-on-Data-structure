class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int maxi=0,cur,i=0,j=height.size()-1;
        
        while(i<j)
        {
            maxi=max((min(height[i],height[j]) * (j-i)),maxi);
            if(height[i]<height[j])
                i++;
            else
                j--;
        }
        return maxi;    
    }
};