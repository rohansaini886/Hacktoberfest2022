#include<iostream>
using namespace std;

int maxElementinArray(int arr[], int n)
{
    int ans=INT_MIN;

    for (int i = 0; i < n; i++)
    {
        ans=max(ans, arr[i]);
    }
    return ans;
}

int main()
{
    int arr[6] = {3,5,6,13,3,9};
    
    cout<<"Maximum element in array: "<<maxElementinArray(arr,6);
    
    return 0;
}