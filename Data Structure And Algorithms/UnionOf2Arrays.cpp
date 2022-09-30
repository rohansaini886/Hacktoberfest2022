#include<iostream>
#include<vector>
using namespace std;

bool isElement(int a[], int n, int target)
    {
        for(int i=0; i<n; i++)
        {
            if(target==a[i])
                return true;
        }
        return false;
    }
    
int helper(int a[], int n, int b[], int m,vector<int>& ans)
    {
        for(int i=0;i<m;i++)
        {
            if(isElement(a,n,b[i]))
                continue;
            else
                ans.push_back(b[i]);
        }
        
        return ans.size();
    }
    
int doUnion(int a[], int n, int b[], int m)  {
        vector<int> ans(a,a+n);
        return helper(a,n,b,m,ans);
    }

int main()
{   
    int a[]={1,2,3,4,5};
    int n=5;
    int b[]={1,2,3};
    int m=3;

    //Prints the count of number of elements present in the vector which contains the union of the two arrays 
    cout<<doUnion(a,n,b,m)<<endl;
    
    return 0;
}