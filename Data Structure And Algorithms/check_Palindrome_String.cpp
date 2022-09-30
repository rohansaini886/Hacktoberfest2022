#include<iostream>
#include<algorithm>
using namespace std;

bool checkPalindrome(string s)
{
    int n=s.length();
	int i=0;
	int j=n-1;

	while(i<=j)
	{
		if(!isalnum(s[i]))
			i++;
		else if(!isalnum(s[j]))
			j--;
		else if(tolower(s[i])!=tolower(s[j]))
			return false;
		else
		{
			i++;
			j--;
		}
	}
	return true;
}

int main()
{
    string str="A 1man,#*)^&$^!!!! a pl9an,/// a cana9l: Panam1a";

	if(checkPalindrome(str))
	{
		cout<<"It is a Palindrome."<<endl;
	}
	else
	{
		cout<<"It is not a Palindrome."<<endl;
	}

    return 0;
}