class Solution {
public:
    int reverse(int x) {
        int rem;
        int reverse = 0;

        long int check = 0;
        while(x != 0){
            rem = x % 10;
            check = reverse;
            if(check*10 > INT_MAX || check*10 < INT_MIN){
                return 0;
            }
            reverse = (reverse * 10) + rem;
            x = x/10;
        }
        return reverse;
    }
};
