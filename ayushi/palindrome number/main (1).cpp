class Solution {
public:
    bool isPalindrome(int x) {
    long long    int Palindrome(0);
        int temp = x;
        while (temp > 0)
        {
            Palindrome = Palindrome * 10 + temp % 10;
           temp /= 10;
        }
        if (Palindrome == x)
            return true;
        else return false;
    }
};