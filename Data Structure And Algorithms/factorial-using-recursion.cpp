#include<iostream>
using namespace std;

int factorial(int n)
{
    //base case
    if(n == 1)  //assume n>0 i.e. n -> natural no.
        return 1;

    // int smallerProblemAns=factorial(n-1);
    // int biggerProblemAns=n*smallerProblemAns;

    // return biggerProblemAns;

    return n*factorial(n-1);
}

int main()
{
    int n;

    cout<<"Enter the number you want factorial of:"<<endl;
    cin>>n;

    cout<<factorial(n)<<endl;
    return 0;
}