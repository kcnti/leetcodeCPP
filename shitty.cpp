class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int n = mat.size();
        if(n==1){
            sum+=mat[0][0];
            return sum;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j)
                    sum+=mat[i][j];
            }
        }
        cout << n << endl;
        cout << "sum: " << sum << endl;
        for (int i = 0; i < n; i++){
            if(i==n-2 && (n-i-1)==n-2)
                continue;
            else if(i==n-3 && (n-i-1)==n-3)
                continue;
            else if(i==n-4 && (n-i-1)==n-4)
                continue;
            sum+=mat[i][n - i - 1];
            cout << mat[i][n - i - 1] << " ";
        }
        return sum;
    }
};