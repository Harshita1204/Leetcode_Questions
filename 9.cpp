class Solution {
public:
    bool isPalindrome(int x) {
      if (x < 0){
        return false; // negative numbers are never palindrome
      }
        int original = x; // we save the original value for comparison later
        long long rev = 0; //this will store the reversed number, start from 0

        while (x > 0) { // loop runs until all the digits are processed
            int digit = x % 10; // gives the last digit
            rev = rev * 10 + digit; // build the reversed number , this shifts the digits left and adds new digit
            x = x / 10; // integer division removes last digit
        }

        return rev == original;  // if reversed number is equal to original , then it is a palindrome
    }
};
