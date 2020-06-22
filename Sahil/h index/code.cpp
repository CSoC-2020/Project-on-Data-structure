class Solution {
public:
    int hIndex(vector<int>& citations) {
        if(citations.size()==0)
            return 0;
        else{
        priority_queue<int> s(citations.begin(),citations.end());
        int i=0;
        for(i=0;i<s.top() && s.empty()!=true;i++)
            s.pop();
        return i;}
    }
};