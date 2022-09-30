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

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size-1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < size-i-1; j++)  
        {
            if (arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
            swapped = true;
        }
        if (swapped == false)
            break;
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
    bubbleSort(arr,5);
    display1D(arr,5);
    
    return 0;
}