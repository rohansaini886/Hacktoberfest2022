#include<iostream>
using namespace std;

bool binarySearch(int arr[], int s, int e, int target)
{
    // Base Case 1
    if(s>e)
        return false;
        
    int mid = s + (e-s)/2;

    //Base Case 2
    if(arr[mid]==target)
        return true;

    if(arr[mid]<target)
        return binarySearch(arr,mid+1,e,target);
    else
        return binarySearch(arr,s,mid-1,target);
}

int main()
{
    int arr[]={2,4,6,10,14,16};
    int target;
    int size = 6;
    int s=0;
    int e=size-1;
    cout<<"Enter element you want to search: "<<endl;
    cin>>target;

    if (binarySearch(arr,s,e,target))
        cout<<"Found!"<<endl;
    else
        cout<<"Not Found!"<<endl;
    
    return 0;
}