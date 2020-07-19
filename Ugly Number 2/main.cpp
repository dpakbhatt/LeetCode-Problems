class Solution {
public:
    int nthUglyNumber(int n) {
        if(n <= 6)
            return n;

        int i2 = 0, i3 = 0, i5 = 0, i = 1;
        int ugly[n];
        ugly[0] = 1;

        while(i < n)
        {
            int n2 = 2*ugly[i2];
            int n3 = 3*ugly[i3];
            int n5 = 5*ugly[i5];
            int temp = min(n2, min(n3, n5));
            ugly[i++] = temp;
            if(temp == n2) i2++;
            if(temp == n3) i3++;
            if(temp == n5) i5++;
        }
        return ugly[n-1];
    }
};
