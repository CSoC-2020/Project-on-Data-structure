class Solution {
public:
    string defangIPaddr(string address) {
        string q = "";
       for(char b : address){
           if(b=='.'){
              q+="[.]";
           }else {
               q+=b;
           }
       } 
        return q;
    }
};