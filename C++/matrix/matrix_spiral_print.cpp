#include <bits/stdc++.h>
using namespace std;

#define n 4
#define m 3

void display(int matrix[n][m]) {
    cout<<endl<<"Matrix will be : "<<endl;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cout<<matrix[i][j]<<"  ";
        }
    }
}

int main() {

    // int n, m;
    // cin>>n>>m;

    int matrix[n][m];

    cout<<"Enter the matrix : ";
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin>>matrix[i][j];
        }
    }

    // display(matrix);

    // print spiral matrix
    int row_start = 0, row_end = n-1;
    int col_start = 0, col_end = m-1;
    
    cout<<endl<<"Spiral Matrix will be : "<<endl;
    while ((row_start <= row_end) && (col_start <= col_end)) {
        //
        for (int col=col_start; col<=col_end; col++) {
            cout<<matrix[row_start][col]<<" ";
        }
        row_start++;
        // cout<<endl;
        //
        for (int row=row_start; row<=row_end; row++) {
            cout<<matrix[row][col_end]<<" ";
        }
        col_end--;
        // cout<<endl;
        //
        if (row_start < row_end) {
            for (int col=col_end; col>=col_start; col--) {
                cout<<matrix[row_end][col]<<" ";
            }
        }
        // cout<<endl;
        row_end--;
        //
        if (col_start < col_end) {
            for (int row=row_end; row>=row_start; row--) {
                cout<<matrix[row][col_start]<<" ";
            }
        }
        // cout<<endl;
        col_start++;

    }


    return 0;

}
