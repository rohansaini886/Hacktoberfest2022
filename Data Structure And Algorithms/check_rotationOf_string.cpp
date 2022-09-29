#include<iostream>
#include<string.h>
using namespace std;

bool checkRotationOfString(string a, string b)
{
    if (a.length() != b.length())
        return false;
    if(a == b)      //for empty strings
        return true;

    // string temp = a+a;
    string temp;
    temp.append(a);
    temp.append(a);
    
    if(temp.find(b)== string::npos)
        return false;
    
    return true;
}

int main()
{
    string a = "shitak";
    string b = "akshit";

    if (checkRotationOfString(a,b))
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
    
    
    return 0;
}