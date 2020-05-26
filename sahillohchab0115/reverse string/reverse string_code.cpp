class Solution {
public:
    void reverseString(vector<char>& s) {
vector<char> temp(s);
        int k=s.size();
        for(int i=temp.size()-1;i>=0;i--)
        {
            s.push_back(temp[i]);
        }
        s.erase(s.begin(),s.begin()+k);
    }
};