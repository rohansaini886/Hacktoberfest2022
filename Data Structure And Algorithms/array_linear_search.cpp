#include<iostream>
using namespace std;

bool search(int arr[3][3], int target, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int arr[3][3]= {5,1,3,4,6,8,10,9,11};
    int n;
    cout<<"Enter element you want to search:"<<endl;
    cin>>n;

    if(search(arr,n,3,3)&1)
    {
        cout<<"Element Found!"<<endl;
    }
    else
    {
        cout<<"Element not Found!"<<endl;
    }

    return 0;
}