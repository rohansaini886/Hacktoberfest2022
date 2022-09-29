// Approach 2 algo:
// for string a:
//     INCREMENT count for individual characters
// for string b:
//     DECREMENT count for individual characters

#include<iostream>
#include<string.h>
using namespace std;

bool checkAnagram(string a, string b)
{
    int freq[26]={0};

    //INCREMENT for string a
    for (int i = 0; i < a.length(); i++)
    {
        char ch=a[i];
        int index= ch-'a'; // Valid for SMALLCASE alphabets only (due to smallcase 'a')
        freq[index]++;
    }

    //DECREMENT for string b
    for (int i = 0; i < b.length(); i++)
    {
        char ch=b[i];
        int index= ch-'a';
        freq[index]--;
    }
    
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
        {
            return false;
        }
    }
    
    return true;
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