class Solution {
public:
    int arrangeCoins(int n) {
        int coins;
        int count = 0;
        for(int i = 1; i<=n; i++){
            coins = 0;
            coins += i;
            n -= coins;
            count++;
        }
        return count;
    }
};
