// Pattern Example:
// Hollow Pyramid
//      * 
//     * *
//    *   *
//   *     *
//  *       *
// * * * * * *

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of lines you want in your pattern:"<<endl;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        // For spaces
        for (int space = 1; space <= n-i; space++)
        {
            cout<<" ";
        }
        // Loop for printing 1st and last(nth) row
        if (i==1 || i==n)
        {
            //For stars
            for (int j = 1; j <= i; j++)
            {
                cout<<"* ";
            }   
        }
        // For printing remaining rows (from 2nd row to (n-1)th row)
        else
        {
            //For 1st star of the row
            cout<<"* ";
            // For spaces in b/w stars
            for (int k = 1; k <= i-2; k++)
            {
                cout<<"  ";
            }
            //For 2nd star of the row
            cout<<"* ";
        }
        cout<<endl; 
    }

    return 0;
}