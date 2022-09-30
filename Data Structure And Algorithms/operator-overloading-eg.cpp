// Operator Overloading in Insertion(<<) and Extraction Operator(>>)
// This is a special case of operator overloading

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Complex
{
    int a,b;
    public:
    void setdata(int a,int b)
    {
        this->a = a;
        this->b = b;
    }
    void showdata()
    {
        cout << "a: " <<a<<", b: "<<b<<endl;
    }
    friend ostream& operator<< (ostream&, Complex); 
    friend istream& operator>> (istream&, Complex&); 
};

ostream& operator<< (ostream& out, Complex c)
{
    out<<"a: "<<c.a<<"b: "<<c.b<<endl;
    return out;
}

istream& operator>> (istream& in, Complex& c)
{
    cout<<"Enter value of a and b:"<<endl;
    in>>c.a>>c.b;
    return in;
}   

int main()
{
    Complex c1,c2;
    cin>>c1>>c2;
    cout<<c1<<c2;
    
    
    return 0;
}
