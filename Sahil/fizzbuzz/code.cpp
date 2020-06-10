#include<sstream>
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> nums={};
        for(int i=1;i<=n;i++)
 {
   if(i%3==0 )
   {if(i%5==0)
       nums.push_back("FizzBuzz");
    else
     nums.push_back("Fizz");
   }
   else if(i%5==0 && i%3!=0)
   {
     nums.push_back("Buzz");
   }

   else
   {
     stringstream ss;
     ss<<i;
     string t;
     ss>>t;
     nums.push_back(t);
 } }
        return nums;
    }
};