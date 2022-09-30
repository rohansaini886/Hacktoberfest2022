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

int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9};

    cout<<"Original matrix:"<<endl;
    printMatrix(arr);
    
    transposeMatrix(arr);

    cout<<"After transpose:"<<endl;
    printMatrix(arr);
    
    return 0;
}