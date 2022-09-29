#include<iostream>
using namespace std;

bool checkSubString(string a, string b)
{
    if (a.find(b) == string::npos)
    {
        return false;
    }

    return true;
}

int main()
{
    string a = "akshit";
    string b = "kshi";

    if (checkSubString(a, b))
    {
        cout<<"String b is a substring of a!"<<endl;
    }
    else
    {
        cout<<"String b is NOT a substring of a!"<<endl;
    }

    return 0;
}