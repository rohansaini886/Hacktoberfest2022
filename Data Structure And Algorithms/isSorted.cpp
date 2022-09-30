#include<iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
    //Base Case
    if (size==0||size==1)
        return true;
    if(arr[0]>arr[1])
        return false;
    else
        return isSorted(arr+1,size-1);
}

int main()
{
    int arr[]={1,2,3,4,5};

    if (isSorted(arr,5))
        cout<<"Array is Sorted!"<<endl;
    else
        cout<<"Array is Not sorted!"<<endl;

    return 0;
}