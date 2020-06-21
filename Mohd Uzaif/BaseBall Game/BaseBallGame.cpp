class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> pt;
        for (auto& s : ops) {
            if (s == "C")
                pt.pop_back();
            else if (s == "D")
                pt.push_back(pt.back() * 2);
            else if (s == "+")
                pt.push_back(pt[pt.size() - 2] + pt[pt.size() - 1]);
            else
                pt.push_back(stoi(s));
        }
        
        return accumulate(pt.begin(), pt.end(), 0);
    }
};