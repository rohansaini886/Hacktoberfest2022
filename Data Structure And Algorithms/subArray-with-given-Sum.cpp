#include <iostream>
using namespace std;

int subArraySum(int arr[],int size,int sum)
{
    int i=0,j=0;

    for(i=0; i<size; i++)
    {
        int currSum= arr[i];
        for (j = i+1; j < size; j++)
        {
            currSum+= arr[j];
            while(currSum>sum && i<j)
            {
                currSum-= arr[i++];
            }
            if (currSum==sum)
            {
                cout<<i<<" "<<j<<endl;
                return 1;
            }
        }
    }
    cout<<"No subarray for given sum is found!"<<endl;
    return 0;
}

int main()
{
    int arr[]={1,4,20,3,10,5};
    int sum;
    cout<<"Enter given sum:"<<endl;
    cin>>sum;

    subArraySum(arr,6,sum);

	return 0;
}