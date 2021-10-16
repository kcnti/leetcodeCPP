class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> tmp;
        for(int i=0;i<accounts.size();i++){
            int sum=0;
            for(int j=0;j<accounts.size()+1;j++){
                sum+=accounts[i][j];
            }
            tmp.push_back(sum);
        }
        int res = tmp[0];
        for(int i=0;i<tmp.size();i++){
            if(tmp[i] > res)
                res = tmp[i];
        }
        return res;
    }
};
