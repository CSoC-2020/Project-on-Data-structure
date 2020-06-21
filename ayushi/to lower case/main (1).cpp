class Solution {
public:
    string toLowerCase(string str) 
    {
        string str1;

        for(int i = 0; i < str.size(); i++)
        {            
            if(str[i] >= 65 && str[i] <= 90)   
            {
                str[i] = str[i] + 32;           
            }         
            str1.push_back(str[i]); 
        }
        return str1;
    }
};