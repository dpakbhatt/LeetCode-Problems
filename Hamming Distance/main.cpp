class Solution {
public:
    int hammingDistance(int x, int y) {
        int res = x ^ y;
        int ans = 0;
        while(res > 0){
            ans += res & 1;
            res = res>>1;
        }
        return ans;
    }
};
