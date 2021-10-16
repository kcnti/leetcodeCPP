#include <bits/stdc++.h>
using namespace std;

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
        for(int i=n-1 ;i>=0 ;i--){
            for(int j=0 ;j<i ;j++){
                if(n%2 != 0)
                    if(i==mat.size()-2 && j==mat.size()-2)
                        continue;
                sum+=mat[j][n-j-1];
                cout << mat[j][n-j-1] << endl;
            }
        }
        return sum;
    }
