#include<iostream>
using namespace std;

void printCount(int n)
{
    //base case
    if(n<1)
        return;
    
    // Recursive function/call
    printCount(n-1);
    
    // Processing
    cout<<n<<" ";
}

int main()
{
    int n;

    cout<<"Enter value of n: "<<endl;
    cin>>n;

    cout<<"Counting:"<<endl;
    printCount(n);
    return 0;
}