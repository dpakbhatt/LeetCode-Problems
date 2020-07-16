class Solution {
public:
    bool isSubsequence(string s, string t) {
        int slength = s.length();
        int tlength = t.length();
        int i = 0;

        for(int j = 0; i < slength && j < tlength; j++){
            if(s[i] == t[j]){
                i++;
            }
        }
        return (i == slength);
    }
};
