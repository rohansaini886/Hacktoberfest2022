// Pattern Example:
// (Full Pyramid)
//      * 
//     * * 
//    * * * 
//   * * * * 
//  * * * * * 
// * * * * * *

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of lines you want in your pattern:"<<endl;
    cin>>n;

    // For Upper Pyramid
    for (int i = 1; i <= n; i++)
    {
        // For spaces
        for (int j = 1; j <= n-i; j++)
        {
            cout<<" ";
        }

        // For stars
        for (int j = 1; j <= i; j++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }

    return 0;
}