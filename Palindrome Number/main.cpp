class Solution {
public:
    long int reverseDigits(long int num) {
        long int rev_num = 0;
        while (num > 0) {
            rev_num = rev_num * 10 + num % 10;
            num = num / 10;
        }
        return rev_num;
    }

    bool isPalindrome(long int n) {
        long int rev_n = reverseDigits(n);
        if (rev_n == n)
            return true;
        else
            return false;
    }
};
