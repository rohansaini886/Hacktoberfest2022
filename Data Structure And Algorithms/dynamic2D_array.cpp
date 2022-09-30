#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter value of rows(m) in array:"<<endl;
    cin>>m;
    cout<<"Enter value of columns(n) in array:"<<endl;
    cin>>n;

    // Creating a 2D Dynamic array
    int** arr= new int*[n];

    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[n];
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