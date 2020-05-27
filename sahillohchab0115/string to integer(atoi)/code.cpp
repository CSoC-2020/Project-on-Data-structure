class Solution {
public:
    int myAtoi(string s) {
       int sign=1;
  int t=0;
  long n=0;
for(int i=0;i<s.size();i++)
{if(s[i]>='0' && s[i]<='9')
{
    sign=1;
    break;
}
 else{
  if(s[i]=='-' && s[i+1]==' ')
  { t+=1;
    break;
  }
  if(s[i]=='-')
  {
    sign=-1;
    s.erase(0,i+1);
      t+=1;
    break;}
if(s[i]=='+')
{
    sign=1;
    t+=1;
    s.erase(0,i+1);
    break;
}
  }}
for(int i=0;i<s.size();i++)
{
  if(s[i]==' ' && t==0)
  {
    continue;
  }
  else if(s[i]==' ' && t>0)
  {
    break;
  }
  else if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')  || (s[i]=='.') ||(s[i]=='+') ||(s[i]=='-') )
  {
    break;
  }
  else if(s[i]>='0' && s[i]<='9')
  {
    t+=1;
n=(n*10)+(int(s[i])-48);
if(n>INT_MAX && sign==1)
{
  n=INT_MAX;
  break;
}
else if(n>INT_MAX && sign==-1)
{
  n=INT_MIN;
  break;
}
  }
}
return n*sign; 
    }
};