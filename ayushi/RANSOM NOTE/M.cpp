class Solution 
{
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        int mag[125]={0};
        int ran[125]={0};
       for (char i : magazine)
mag[i]++;
for (char i : ransomNote)
ran[i]++;
        for(int i=97;i<=122;i++)
        {
           if(ran[i] != 0 &&(ran[i] <= mag[i])==0)
               return false;
        }
        return true;
        
    }
};