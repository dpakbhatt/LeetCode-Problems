class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word, rev;

        while (ss >> word)
            rev = word + " " + rev;

        if (rev.size())
            rev.pop_back();

        return rev;
    }
};
