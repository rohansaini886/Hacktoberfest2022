// Approach 1 algo:
// sort and compare the strings

#include<iostream>
#include<algorithm>
using namespace std;

bool checkAnagram(string a, string b)
{
    // For sorting the two strings
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    //For Comparing the two strings
    if (a.compare(b)==0)
    {
        return true;
    }
    return false;
}

int main()
{
    string a="akshit";
    string b="tkshia";

    if (checkAnagram(a,b))
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }

    return 0;
}