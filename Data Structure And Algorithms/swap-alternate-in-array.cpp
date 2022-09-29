#include<iostream>
using namespace std;

void swapAlternateinArray(int arr[], int n)
{
    int i=0;
    
    while (i+1<n)
    {
        swap(arr[i], arr[i+1]);
        i=i+2; 
    }
}

int main()
{
    int arr[] = {3,5,6,13,3,9};

    cout<<"Before Swapping/Original array:"<<endl;
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }

    swapAlternateinArray(arr,6);

    cout<<"\nAfter Swapping alternate elements:"<<endl;
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}