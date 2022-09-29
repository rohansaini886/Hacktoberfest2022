#include<iostream>
using namespace std;

int main()
{
    int S,E,W,C;
    cout<<"Enter the Starting value(S) of Fahrenheit: "<<endl;
    cin>>S;
    cout<<"Enter the Ending value(E) of Fahrenheit: "<<endl;
    cin>>E;
    cout<<"Enter the Step size/Gap value(W): "<<endl;
    cin>>W;

    for(S<=E)
    {
        C=5.0/9*(S-32);
        cout<<S<<"\t";
        cout<<C<<endl;
        S+=W;
    }
    return 0;
}
