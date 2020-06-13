int CheckDoubleString(string a)
{
    if(a == "IV")
        return 4;
    else if(a == "IX")
        return 9;
    else if(a =="XL")
        return 40;
    else if(a =="XC")
        return 90;
    else if(a == "CD")
        return 400;
    else if(a == "CM")
        return 900;
    else
        return 0;
}

int CheckSingleCharacter(char a)
{
    if(a == 'I')
        return 1;
    else if(a == 'V')
        return 5;
    else if(a == 'X')
        return 10;
    else if(a == 'L')
        return 50;
    else if(a == 'C')
        return 100;
    else if(a == 'D')
        return 500;
    else if(a == 'M')
        return 1000;
    else
        return 0;
}
class Solution {
public:

int romanToInt(string s) {

    unsigned int result = 0;
    int val = 0;
    
    for(int i = 0; i < s.length(); i++)
    {
        string str;
        str= s.substr(i, 2);
        
        if(str =="IV" || str =="IX" || str =="XL" || str =="XC" || str =="CD" || str=="CM" )
        {
            val = CheckDoubleString(str);
            i ++;
        }
        else
        {
            val = CheckSingleCharacter(s[i]);
        }
        result = result+ val;
    }
    return result;
}

};
