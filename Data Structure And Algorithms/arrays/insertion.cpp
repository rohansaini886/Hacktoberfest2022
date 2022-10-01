#include<bits/stdc++.h>

using namespace std;

void insert(int a[],int n,int x){
    //insert at position 3
    for(int i=n-1;i>=2;i--){
        a[i+1]=a[i];
    } 
    a[2] = x;
    n = n + 1;
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    insert(a,n,3); 
}