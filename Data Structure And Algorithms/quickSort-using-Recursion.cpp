#include<iostream>
using namespace std;

int partition(int arr[],int s,int e)
{
    //Taking first element as pivot
    int pivot=arr[s];

    // Count elements smaller than pivot
    int cnt=0;
    for (int i = s+1; i <= e; i++)
    {
        if (arr[i]<=pivot)
            cnt++;
    }

    // Finding right place/position for pivot
    int pivotIndex = s+cnt;

    // Swapping to place pivot at its right position
    swap(arr[pivotIndex],arr[s]);

    // handle left and right part
    // We want lesser elements to be on the left side of the pivot
    // and greater elements to be on the right side of the pivot
    int i= s;
    int j= e;
    while (i < pivotIndex && j > pivotIndex)
    {
        //Already sorted elements of left side
        while (arr[i]<=pivot)
            i++;
        //Already sorted elements of right side
        while (arr[j]>pivot)
            j--;

        if (i < pivotIndex && j > pivotIndex )
            swap(arr[i++],arr[j--]);
    }
    return pivotIndex;
}

void quickSort(int arr[],int s,int e)
{
    //Base Case
    if(s>=e)
        return;
    
    //partition krdo
    int pIndex= partition(arr,s,e);

    //left ko sort krdo
    quickSort(arr,s,pIndex-1); 

    //right ko sort krdo
    quickSort(arr,pIndex+1,e);
}

int main()
{
    int arr[]={12,11,13,5,6,7,7,7};
    int size=8;

    quickSort(arr,0,size-1);

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}