class Solution {
public:
    int maxArea(vector<int>& height) {
       

int max_area = 0;
        int n = height.size();
        int first = 0, last = n-1;
        while(first < last)
        {
            max_area = max(max_area, min(height[first], height[last])*(last-first));
            
            if(height[first]>height[last])
             last--;
            else
             first++;
        }
        return max_area;
    }
};
