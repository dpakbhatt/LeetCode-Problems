class Solution {
public:
    int divide(int dividend, int divisor) {
        int neg = 0;
        if (dividend < 0 && divisor > 0 || (dividend > 0 && divisor < 0)) {
            neg = 1;
        }
        long long a = abs(dividend);
        long long b = abs(divisor);
        long long res = exp(log(a) - log(b));
        if (neg == 0 && res > INT_MAX) {
            return INT_MAX;
        } else if (neg && res > INT_MAX) {
            return INT_MIN;
        } else {
            return neg ? -(int)res : (int)res;
        }
    }
};
