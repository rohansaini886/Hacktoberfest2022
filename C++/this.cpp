#include <iostream>
using namespace std;
class basic
{
    int i;
    float f;
    public:
        basic getdata(int i, float f)
        {
            this->i = i;
            this->f = f;
            return *this;
        }
        void display()
        {
            cout<<"i value is "<<i;
            cout<<"\nf value is "<<f;
        }
};

int main()
{
    basic b;
    b.getdata(10, 398.783);
    b.display();
    return 0;
}