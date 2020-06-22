class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxVal = *max_element(candies.begin(), candies.end());
        vector<bool> res;
        for (auto& candy : candies) {
            res.push_back(candy + extraCandies >= maxVal? true : false);
        }
        
        return res;
    }
};