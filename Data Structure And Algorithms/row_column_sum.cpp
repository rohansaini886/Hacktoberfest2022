#include<iostream>
using namespace std;

void columnSum(int arr[3][4],int row,int col)
{
    int i,j;

    for ( i = 0; i < col; i++)
    {
        int sum = 0;
        for ( j = 0; j < row; j++)
        {
            sum += arr[j][i];
        }
        cout<<i+1<<" Column's sum: "<<sum<<endl;
    }
}

void rowSum(int arr[3][4],int row,int col)
{
    int i,j;

    for ( i = 0; i < row; i++)
    {
        int sum = 0;
        for ( j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        cout<<i+1<<" Row's sum: "<<sum<<endl;
    }
}

int main()
{
    int arr[3][4]={3,5,11,7,1,3,0,9,7,10,1,6};

    columnSum(arr,3,4);
    rowSum(arr,3,4);
    
    return 0;
}