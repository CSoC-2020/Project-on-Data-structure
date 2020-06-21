class Solution {
public:
    bool detectCapitalUse(string word) {
        int count = 0;
        for(int i = 0; i < word.size(); i++){
            if(isupper(word[i]))
                count++;
        }
        switch(count){
            case 0:     return true;
                        break;   
            case 1:     return isupper(word[0]);
                        break;
            default:    return count == word.size();
                        break;
        }
    }
};