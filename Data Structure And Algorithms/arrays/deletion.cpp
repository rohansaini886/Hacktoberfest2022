#include<bits/stdc++.h>

using namespace std;

void deleteAnele(int a[],int n,int x){
    int ind;
    for(int i=0;i<n;i++)
    if(a[i]==x) ind=i;

    for(int i=ind;i<n;i++){
        a[i]=a[i+1];
    }
    n= n-1;
    for(int i=0;i<n;i++) cout<<a[i]<<endl;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    deleteAnele(a,n,4);
}