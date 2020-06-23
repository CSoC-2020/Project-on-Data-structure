class Solution {
public:
    
     static int getmax(string s, int i){
        int max=i;
        for(int j=i;j<s.length();j++)
        {
            if(s[max]<=s[j])
                max=j;
        }
        return max;
    }
    int maximumSwap(int num) {
        string s = to_string(num);
        string s1 = s;
        for(int i=0;i<s.length();i++)
        {
            int temp = getmax(s,i);
            swap(s[i],s[temp]);
            if(s1!=s)
                break;
        }
        int number = stoi(s);
        return number;
    }
};
