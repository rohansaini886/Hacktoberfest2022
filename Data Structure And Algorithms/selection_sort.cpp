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

void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size-1; i++)
    {
        int minIndex = i;
        for (int j = i+1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main()
{
    int arr[5];

    cout<<"Enter elements in the array:"<<endl;
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
    }

    cout<<"Original Array:"<<endl;
    display1D(arr,5);

    cout<<"Sorted Array:"<<endl;
    selectionSort(arr,5);
    display1D(arr,5);

    return 0;
}