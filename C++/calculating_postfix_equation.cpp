//
// Created by Yathartha Rana on 01/10/22.
//

#include<iostream>
#include<cmath>
#include<vector>
#define maxi = INT32_MAX
using namespace std;
struct st
        {
    long long a[200000];
    long long top;
};
int main()
{
    st p;
    p.top=-1;
    long long i=0,value;
    int op1,op2;
    string s;
    char c;
    cout<<"Enter the postfix equation ";
    cin>>s;
    while(s[i]!='\0')
    {
        if(s[i]>='0'&&s[i]<='9')
            p.a[++p.top]=s[i]-'0';
        else
        {
            c=s[i];
            op2=p.a[p.top--];
            op1=p.a[p.top--];
            switch(c)
            {
                case '+' :
                    value=op1+op2;
                    break;
                case '-' :
                    value=op1-op2;
                    break;
                case '*' :
                    value=op1*op2;
                    break;
                case '/' :
                    value=op1/op2;
                    break;
                case '$' :
                    value=pow(op1,op2);
                    break;
            }
            p.a[++p.top]=value;
        }
        i++;
    }
    cout<<"The value of the postfix equation is "<<p.a[p.top--]<<'\n';
}
