class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
         double slope;
        if(c[1][1]-c[0][1]==0)
        {
            for(int i=1;i<c.size()-1;i++)
            {
                if(c[i+1][1]-c[i][1]!=0)
                    return false;
            }
        }
        else
        {
            slope = (double)(c[1][0]-c[0][0])/(c[1][1]-c[0][1]);
            for(int i=1;i<c.size()-1;i++)
            { //using the slope formula i.e (y2-y1)/(x2-x1)
                if((double)(c[i+1][0]-c[i][0])/(c[i+1][1]-c[i][1])!=slope)
                    return false;
            }
        }
        
        return true;
    }
};