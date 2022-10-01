#include <iostream>
using namespace std;

int main()
{
    int number;
    int num1 = 0, num2=1 , temp=0;


    cout << "Enter No. of integers you want to print for fibonacci series: ";
    cin >> number ;
    cout << num1 << " " << num2 << " ";
    for (int i = 2 ; i < number ; i++)
    {
        temp=num1+num2;
        cout << temp << " ";
        num1=num2;
        num2=temp;
    }

    return 0;
}