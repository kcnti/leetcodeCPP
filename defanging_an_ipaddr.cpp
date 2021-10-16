class Solution {
public:
    string defangIPaddr(string address) {
        string res = "";
        for(int i=0;i<address.length();i++){
            if(address[i] == '.'){
                res = res + "[.]";
                continue;
            }
            res = res+address[i];
        }
        return res;
    }
};
