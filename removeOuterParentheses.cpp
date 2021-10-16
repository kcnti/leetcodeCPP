class Solution {
public:
    string removeOuterParentheses(string S) {
        string ans = "";
        for(int i=0;i<S.length();i++) {
            if(i+1 == S.length() && i+2 == S.length() && i+3 == S.length())
                break;
            if(S[i] == '(' && S[i+1] == ')') {
                ans = ans + "()";
                i++;
            }
            if(S[i] == '(' && S[i+1] != ')') {
                continue;
            }
        }
        return ans;
    }
};