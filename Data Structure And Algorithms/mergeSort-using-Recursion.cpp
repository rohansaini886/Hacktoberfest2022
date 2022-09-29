#include<iostream>
using namespace std;

void merge(int arr[],int s,int e)
{
    int mid = s + ((e-s)/2);

    int leftlength = mid-s+1;
    int rightlength = e-mid;

    // Creating left and right parts
    int *left = new int[leftlength];
    int *right = new int[rightlength];

    //Copy values into left part
    int originalIndex = s;
    for (int i = 0; i < leftlength; i++)
    {
        left[i]=arr[originalIndex++];
    }

    //Copy values into right part
    originalIndex = mid+1;
    for (int i = 0; i < rightlength; i++)
    {
        right[i]=arr[originalIndex++];
    }

    //Now we have two sorted arrays, 
    //we have to merge them
    int leftIndex=0;
    int rightIndex=0;
    originalIndex = s;

    while (leftIndex < leftlength && rightIndex < rightlength)
    {
        if (left[leftIndex] <= right[rightIndex])
            arr[originalIndex++] = left[leftIndex++];
        else
            arr[originalIndex++] = right[rightIndex++];
    }
    
    // Store remaining elements of first part(if any)
    while(leftIndex<leftlength)
        arr[originalIndex++]=left[leftIndex++];
    // Store remaining elements of second part(if any)
    while(rightIndex<rightlength)
        arr[originalIndex++]=right[rightIndex++];

    delete []left;
    delete []right;
}

void mergeSort(int arr[],int s,int e)
{
    //Base Case
    if(s>=e)
        return;

    int mid = s + ((e-s)/2);
    
    //Left Part sort krna h
    mergeSort(arr,s,mid);
    
    //Right part sort krna h
    mergeSort(arr,mid+1,e);

    //merge 2 sorted parts   
    merge(arr,s,e);
}

int main()
{
    int arr[]={12,11,13,5,6,7};
    int size=6;

    mergeSort(arr,0,size-1);

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}