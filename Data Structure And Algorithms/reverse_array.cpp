#include<iostream>
using namespace std;

void reverseArray(int arr[], int n)
{
    int i=0;
    int j= n-1;

    while (i<j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main()
{
    int arr[6] = {3,5,6,7,3,9};

    cout<<"Before Reverse:"<<endl;
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }

    reverseArray(arr,6);

    cout<<"\nAfter Reverse:"<<endl;
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}