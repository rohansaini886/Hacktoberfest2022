#include<iostream>
#include<stack>
using namespace std;

void midElement(stack<int>& st,int size,int mid)
{
    if(mid==0)
    {
        cout<<st.top()<<endl;
        return;
    }

    int element= st.top();
    st.pop();
    midElement(st,size,mid-1);
    st.push(element);
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

    int mid;
    if(st.size()&1) //for odd
        mid = (st.size()/2);
    else            //for even
        mid = (st.size()/2)-1;

    midElement(st,st.size(),mid);

    
    return 0;    

}