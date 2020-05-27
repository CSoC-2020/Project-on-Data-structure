class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
 int c=0;
        for(int i=digits.size()-1;i>=0;i--)
        {
        
            if(i==digits.size()-1)
            {
                digits[i]+=1;
                if(digits[i]%10==0)
                {
                    c+=1;
                    digits[i]=0;
                }
            }
            if(i<digits.size()-1 && c==1)
            {
                digits[i]+=1;
                c-=1;
                if(digits[i]%10==0)
                {
                    c+=1;
                    digits[i]=0;
                }
            }
            if(c==0 && i<digits.size()-1)
                break;
        }
        if(c==1)
            digits.insert(digits.begin(),1);
        return digits;
    }
};