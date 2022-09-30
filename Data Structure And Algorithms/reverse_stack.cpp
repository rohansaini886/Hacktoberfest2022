#include <iostream>
#include<stack>
using namespace std;
 
void insAtBottom(stack<int>& st,int topelement)
{
	if(st.empty())
	{
		st.push(topelement);
		return;
	}

	int element = st.top();
	st.pop();
	insAtBottom(st,topelement);
	st.push(element);
}

void reverse(stack<int>& st)
{
	if(st.empty())
		return;

	int topelement = st.top();
	st.pop();

	reverse(st);

	insAtBottom(st,topelement);
}

int main() 
{
    stack<int> st;

	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.push(5);
	st.push(6);


	//Before reversing, if we print original stack then it will print-> 6 5 4 3 2 1 (because top is at 6)
	//But after reversing, if we print original stack then it will print-> 1 2 3 4 5 6	(because now, top is at 1)
	reverse(st);

	cout<<"After Reversing: "<<endl;
	while (!st.empty())
	{
		cout<<st.top()<<" ";
		st.pop();
	}
	
	return 0;
}