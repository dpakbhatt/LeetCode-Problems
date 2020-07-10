class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i;
        int n = s.length();
        if(n > 0){
            int startcurrent = 0;
            int currlen;
            int maxlen = 0;
            int start;
            unordered_map<char, int> pos;
            pos[s[0]] = 0;
            for (i = 1; i < n; i++) {
                if (pos.find(s[i]) == pos.end())
                    pos[s[i]] = i;
                else {
                    if (pos[s[i]] >= startcurrent) {
                        currlen = i - startcurrent;
                        if (maxlen < currlen) {
                            maxlen = currlen;
                            start = startcurrent;
                        }
                        startcurrent = pos[s[i]] + 1;
                    }
                    pos[s[i]] = i;
                }
            }
            if (maxlen < i - startcurrent){
                maxlen = i - startcurrent;
                start = startcurrent;
            }
            return maxlen;
        }
        else {
            return 0;
        }
    }
};
