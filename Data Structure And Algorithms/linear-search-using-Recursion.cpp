#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int target)
{
    // Base Case
    if(arr[0]==target)
        return true;
    else if(size==0)
        return false;

    else
    {
        bool ans= linearSearch(arr+1, size-1, target);
        return ans;
    }
}

int main()
{
    int arr[] = {3,2,25,-3,11};

    if (linearSearch(arr,5,-3))
        cout<<"Found!"<<endl;
    else
        cout<<"Not Found!"<<endl;

    return 0;
}