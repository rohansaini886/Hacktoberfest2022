#include<bits/stdc++.h>
using namespace std;

void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

void countSort(int *A, int n)
{
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(A[i]> max)
        {
            max=A[i];
        }
    }
    int count[max+1];
    for(int i=0;i<max+1;i++)
    {
        count[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        count[A[i]]++;
    }
    int i=0,j=0;
    while(i<=max)
    {
        if(count[i]>0)
        {
            A[j]=i;
            count[i]--;
            j++;
        }
        else
        {
            i++;
        }
    }
}

int main(){
    int A[]={9,1,4,14,4,15,6};
    int n=7;
    countSort(A, n);
    printArray(A, n);
    return 0;
}