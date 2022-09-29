#include<iostream>
using namespace std;

int optimalStrategy(int arr[], int i, int j)
{
    // Base Case
    if(i>j)
        return 0;

    int choice1 = arr[i] + min(optimalStrategy(arr,i+1,j-1) , optimalStrategy(arr,i+2,j));
    int choice2 = arr[j] + min(optimalStrategy(arr,i,j-2) , optimalStrategy(arr,i+1,j-1));

    int ans = max(choice1,choice2);
    return ans;
}

int main()
{
    int arr[]={20,30,2,2,2,10};
    int i=0;
    int j= 5;
    cout<<"Answer: "<<optimalStrategy(arr,i,j)<<endl;

    return 0;
}