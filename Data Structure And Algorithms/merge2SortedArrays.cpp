#include<iostream>
using namespace std;

void mergeTwoSortedArray(int arr1[], int arr2[], int arr3[], int n1, int n2, int n3)
{
    int i = 0, j=0, k=0;
    
    // Traverse both array
    while (i<n1&&j<n2)
    {
        // Check if current element of first
        // array is smaller than current element
        // of second array. If yes, store first
        // array element and increment first array
        // index. Otherwise do same with second array
        if (arr1[i]<arr2[j])
            arr3[k++]=arr1[i++];
        else
            arr3[k++]=arr2[j++];
    }

    // Store remaining elements of first array(if any)
    while(i<n1)
        arr3[k++]=arr1[i++];
    // Store remaining elements of second array(if any)
    while(j<n2)
        arr3[k++]=arr2[j++];
}

int main()
{
    int arr1[]={2,5,6,8};
    int arr2[]={1,3,9};
    int arr3[7];

    mergeTwoSortedArray(arr1, arr2, arr3, 4, 3, 7);

    for (int i = 0; i < 7; i++)
    {
        cout<<arr3[i]<<" ";
    }
    

    return 0;
}