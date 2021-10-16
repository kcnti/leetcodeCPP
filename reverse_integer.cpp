#include <bits/stdc++.h>
using namespace std;

int reverse(int x) {
        string res = "";
        string s = to_string(x);
        if(s[0] == '-'){
            res+="-";
        }
        reverse(s.begin(),s.end());
        res+=s;
        long integer = stoll(res);
        return integer;

}

bool isPalindrome(int x) {
        string s = to_string(x);
        string temp = s;
        if(s == "0")
            return true;
        if(temp[0] == '-' || temp[0] == '0' || temp[temp.length()-1] == '0')
            return false;
        reverse(s.begin(),s.end());
        if(temp != s)
            return false;
        return true;
    }

int main(){
    cout << isPalindrome(123) << endl;
}
