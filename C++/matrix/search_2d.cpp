#include <bits/stdc++.h>
using namespace std;

int main() {

    int m, n;
    cin>>n>>m;

    vector<vector<int>> mat(m, vector<int>(n));

    for (int i=0; i<mat.size(); i++) {
        for (int j=0; j<mat[0].size(); j++) {
            cin>>mat[i][j];
        }
    }

    int target; cin>>target;

    //
    
    int r = m, c = n;
    int i = 0, j = r-1;
    int x = 0, y = c-1;

    bool flag = false;
    int midC, midR;
    while (i <= j) {
        midC = (i+j)/2;
        if (target == mat[midC][0]) {
            flag = true;
            break;
        }
        else if (target < mat[midC][0]) {
            j = midC-1;
        }
        else {
            i = midC+1;
        }
    }

    while (x <= y) {
        midR = (x+y)/2;
        if (target == mat[midC][midR]) {
            flag = true;
            break;
        }
        else if (target > mat[midC][midR]) {
            i = midR+1;
        }
        else {
            j = midR-1;
        }
    }

    cout<<endl<<mat[midC][midR]<<endl;
    cout<<flag<<endl;

    return 0;
}