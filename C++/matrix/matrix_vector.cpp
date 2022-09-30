#include <bits/stdc++.h>
using namespace std;

#define n 1
#define m 4

int main() {

    // initialising the size of the matrix
    vector<vector<int>> matrix(n, vector<int>(m));

    // for (int i=0; i<n; i++) {
    //     for (int j=0; j<m; j++) {
    //         cin>>matrix[i][j];
    //     }
    // }
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin>>matrix[i][j];
        }
    }
    cout<<endl;
    //
    for (int i=0; i<matrix.size(); i++) {
        for (int j=0; j<matrix[i].size(); j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    int r=2, c=2;
    vector<vector<int>> ans(r, vector<int>(c));
    for (int i=0; i<(m*n); i++) {
        ans[i/c][i%c] = matrix[i/n][i%n];
    }
    cout<<endl;

    //
    // for (int i=0; i<ans.size(); i++) {
    //     for (int j=0; j<ans[i].size(); j++) {
    //         cout<<ans[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}