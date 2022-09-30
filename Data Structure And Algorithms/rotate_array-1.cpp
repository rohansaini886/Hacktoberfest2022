#include<iostream>
using namespace std;

void rotateArray(int arr[], int size,int k)
{
    // If rotation is greater than size of array
    k = k % size;

    for (int i = 0; i < size; i++)
    {
        // Printing rightmost kth elements
        if (i<k)
            cout<<arr[size-k+i]<<" ";
        // Prints array after 'k' elements
        else
        {   
            cout<<arr[i-k]<<" ";
        }
    }    
}

int main()
{
    int arr[5]={1,2,3,4,5};

    rotateArray(arr,5,2);

    return 0;
}