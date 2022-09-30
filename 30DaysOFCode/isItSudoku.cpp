#include<iostream>
using namespace std;
bool checkBoard(int matrix[9][9],int no,int i,int j){
    for(int k=0;k<9;k++){
        if(matrix[i][k]==no || matrix[k][j]==no){
            return false;
        }
    }  
//     checking 3x3 subgrid
    int si=i-i%3;
    int sj=j-j%3;
    for(int p=si;p<si+3;p++){
        for(int q=sj;q<sj+3;q++){
            if(matrix[p][q]==no){
                return false;
            }
        }
    }
    return true;
}

bool solveSudoku(int matrix[9][9],int i,int j){
    if(i==9) return true;
    if(j==9) return solveSudoku(matrix,i+1,0);
    if(matrix[i][j]!=0) return solveSudoku(matrix,i,j+1);
    
    for(int c=1;c<=9;c++){
        if(checkBoard(matrix,c,i,j)==true){
            matrix[i][j]=c;
            if(solveSudoku(matrix,i,j+1)==true) return true;
            
//           backtrack
             matrix[i][j]=0;
        }
    }
    return false;
}
bool isItSudoku(int matrix[9][9]) {
    // Write your code here.
    if(solveSudoku(matrix,0,0)==true){
        return true;
    }
    return false;
}

int main(){
	int matrix[9][9];
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			cin>>matrix[i][j];
		}
	}
	if(isItSudoku(matrix)){
		cout<<"It's a valid Sudoku";
	}else{
		cout<<"It's not a valid Sudoku";
	}
}
