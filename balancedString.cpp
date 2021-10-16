class Solution {
public:
    int balancedStringSplit(string s) {
        int ans=0;
        for(int i=0;i<s.length();i++) {
            if(i+1 >= s.length() && i+2 >= s.length())
                break;
            if(s[i] != s[i+1]) {
                i+=2;
                ans++;
                continue;
            }
            if(s[i+2] == s[i]) {
                ans++;
                i+=2;
                continue;
            }
        }
        return ans;
    }
};
