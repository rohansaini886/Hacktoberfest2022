#include<iostream>

using namespace std;

int main()
{
char ch;
cout<<"Enter any character: ";
cin>>ch;

if(ch>='A' && ch<='Z')
cout<<endl<<"You entered an uppercase character.";
else if(ch>='0' && ch<='9')
cout<<endl<<"You entered a digit.";
else if(ch>='a' && ch<='z')
cout<<endl<<"You entered a lowercase character.";
else
cout<<endl<<"You entered a special character.";
return 0;
}
