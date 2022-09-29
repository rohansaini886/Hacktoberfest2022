#include<iostream>
using namespace std;

void display1D(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverseArray(int arr[], int n,int start,int end)
{
    while (start<end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void rotateArray(int arr[], int size, int k)
{
    // base case: invalid input
    if (k < 0 || k >= size) {
        return;
    }
    reverseArray(arr,5,0,size-1);
    reverseArray(arr,5,0,k-1);
    reverseArray(arr,5,k,size-1);
}

int main()
{
    int arr[5]={1,2,3,4,5};
    int k=3;// Number of Rotations

    rotateArray(arr,5,k);
    cout<<"Array after "<<k<<" Rotations:"<<endl;
    display1D(arr,5);

    return 0;
}