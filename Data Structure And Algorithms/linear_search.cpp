#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == target)
        {
            cout<<"ELement found at index "<<i<<endl;
            return 0;
        }
    }
    cout<<"Element not found!";
    return 0;
}

int main()
{
    int arr[]={4,-6,1,3,13,7,-1,0,-26};
    int n;
    
    cout<<"Enter the number you want to search:"<<endl;
    cin>>n;

    linearSearch(arr,9,n);

    return 0;
}