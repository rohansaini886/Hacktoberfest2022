#include<bits/stdc++.h>

using namespace std;

void search(int a[],int n,int x){
    for(int i=0;i<n;i++)
        if(a[i]==x) cout<<i<<endl;;
    
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    search(a,n,3);
}