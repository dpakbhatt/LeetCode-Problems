class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        stack<char> bracket;
        for(int i =0; i < n; i++){
            if(bracket.empty()){
                if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                    bracket.push(s[i]);
                }else {
                    return false;
                }
            }else if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                bracket.push(s[i]);
            }else {
                if(bracket.top()=='(' && s[i]==')'){
                   bracket.pop();
                }else if(bracket.top()=='[' && s[i]==']'){
                   bracket.pop();
                }else if(bracket.top()=='{' && s[i]=='}'){
                   bracket.pop();
                }else {
                   return false;
                }
            }
        }
        if(bracket.size()==0){
            return true;
        }else {
            return false;
        }
    }
};
