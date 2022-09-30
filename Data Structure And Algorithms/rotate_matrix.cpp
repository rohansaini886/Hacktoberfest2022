#include<iostream>
using namespace std;

void printMatrix(int arr[3][3])
{
    for ( int i = 0; i < 3; i++)
    {
        for ( int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void transposeMatrix(int arr[3][3])
{
    for ( int i = 0; i < 3; i++)
    {
        for ( int j = 0; j < i; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
}

void rotateMatrixBy90(int arr[3][3], int row, int col)
{
    transposeMatrix(arr);

    for ( int i = 0; i < row; i++)
    {
        for ( int j = 0; j < col; j++)
        {
            int start = 0;
            int end = col-1;
            while (start<end)
            {
                swap(arr[i][start], arr[i][end]);
                start++;
                end--;
            }
        }
    }
}

void rotateMatrixBy180(int arr[3][3], int row, int col)
{
    //First, swapping elements of columns
    for ( int i = 0; i < row; i++)
    {
        for ( int j = 0; j < col; j++)
        {
            int start = 0;
            int end = row-1;
            while (start<end)
            {
                swap(arr[start][i], arr[end][i]);
                start++;
                end--;
            }
        }
    }

    //Then, swapping elements of rows (reversing each row to get the desired matrix) 
    for ( int i = 0; i < row; i++)
    {
        for ( int j = 0; j < col; j++)
        {
            int start = 0;
            int end = col-1;
            while (start<end)
            {
                swap(arr[i][start], arr[i][end]);
                start++;
                end--;
            }
        }
    }
}

int main()
{
    int arr1[3][3]={1,2,3,4,5,6,7,8,9};
    int arr2[3][3]={1,2,3,4,5,6,7,8,9};

    cout<<"Original matrix:"<<endl;
    printMatrix(arr1);

    rotateMatrixBy90(arr1,3,3);

    cout<<"After rotating the matrix by 90°:"<<endl;
    printMatrix(arr1);

    rotateMatrixBy180(arr2,3,3);

    cout<<"After rotating the matrix by 180°:"<<endl;
    printMatrix(arr2);
    
    return 0;
}