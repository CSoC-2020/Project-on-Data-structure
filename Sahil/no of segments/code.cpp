class Solution {
public:
    int countSegments(string s) {
       int k=0;
  int c=0;
  for(int i=0;i<s.size();i++)
  {
    if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9'))
    {
      c+=1;
    }
     else if(s[i]==',' && c==0)
         c+=1;
    else if((s[i]==' ' && c>=1) || (s[i]=='.' && c>=1))
    {
      if(c>=1)
      k+=1;
      c=0;
    }
      else
          continue;
  }
  if(c>=1)
  {k+=1;}
  return k; 
    }
};