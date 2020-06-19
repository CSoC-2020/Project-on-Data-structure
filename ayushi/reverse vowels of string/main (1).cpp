class Solution {
public:
bool isVowel(char ch) {
if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'||ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
return true;
else return false;
}
string reverseVowels(string s) {

      int k=0,j=s.length()-1;
       while(k<j)
       {
           
           if(isVowel(s[k]))
           {
                  while(j>k and !isVowel(s[j]))
                       j--;
                 swap(s[k],s[j]);
                 
               j--;
           }
          k++;
           
         }
    return s;
    
    
    
}
};