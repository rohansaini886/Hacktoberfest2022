#include<iostream>
using namespace std;

int getMaxSubArraySum(int arr[], int n)
{
    int ans= INT_MIN;
    int sum= 0;

    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];

        ans= max(ans,sum);

        if (sum<0)
        {
            sum=0;
        }
    }
    return ans;
}

int main()
{
    int arr[]={-2,-3,4,-1,-2,1,5,-3};

    cout<<"Max subarray sum is:\n"<<getMaxSubArraySum(arr,8);
    
    return 0;
}