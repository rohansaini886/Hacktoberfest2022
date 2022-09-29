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

void insertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i-1;
        for (; j >=0 ; j--)
        {
            if (arr[j]>temp)
                arr[j+1]=arr[j];
            else
                break;
        }
        arr[j+1]=temp;
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
    insertionSort(arr,5);
    display1D(arr,5);

    return 0;
}