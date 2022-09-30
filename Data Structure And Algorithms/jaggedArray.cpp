#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter value of rows(m) in array:"<<endl;
    cin>>m;
    cout<<"Enter value of columns(n) in array:"<<endl;
    cin>>n;

    // For making a jagged array we need to take a size of individual rows(of the dynamic array)
    // using a 1D array for this particular purpose
    int size[]={5,3,4,5,6};

    // Creating a 2D array m*n
    int** arr= new int*[m];
    
    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[size[i]];
    }

    //For Input
    cout<<"Enter elements of array:"<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    cout<<endl;
    
    //For Output/Printing the array
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //Deleting
    for (int i = 0; i < m; i++)
    {
        delete []arr[i];
    }
    
    delete []arr;
    
    return 0;
}