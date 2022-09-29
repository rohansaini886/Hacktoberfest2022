#include<iostream>
using namespace std;

int findComplement(int num) 
{
    int mask = 0;
    while(mask<num)
    {
        mask=mask<<1 | 1;
    }
    int ans=(~num)&mask;
    return ans;
}
 

int main()
{
    int n;

    cout<<"Enter a number you want complement of:"<<endl;
    cin>>n;

    cout<<"Complement of "<<n<<" is "<<findComplement(n)<<endl;
    
    return 0;
}