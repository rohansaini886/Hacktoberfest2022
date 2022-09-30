#include<iostream>
#include<string>
using namespace std;

int maxNumberInArray(int arr[], int size, int i)
{
    // Base Condition 
    if (i>size-1)
    {
        return 0;
    }

    int maxi= max(arr[i],maxNumberInArray(arr,size,i+1));

    return maxi;
}

int main()
{
    int arr[]={3,5,-1,12,11};
    cout<<"Maximum number among the given elements is "<<maxNumberInArray(arr,5,0)<<endl;
    
    return 0;
}