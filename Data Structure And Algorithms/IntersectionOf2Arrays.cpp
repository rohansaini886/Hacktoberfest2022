#include<iostream>
#include<vector>
using namespace std;

void Sort(int arr[], int size)
{
    for (int i = 0; i < size-1; i++)
    {
        int minIndex = i;
        for (int j = i+1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}
int main()
{
    int a[]={4,9,5};
    int n=3;
    int b[]={9,4,9,8,4};
    int m=5;
    Sort(a,n);
    Sort(b,m);

    vector<int> ans(1,INT_MIN);

    int cnt=0;
    for (int i = 0; i < n; i++)
    {
        // int cnt1 = cnt;
        for (int j = cnt; j<m; j++)
        {
            if (a[i]>b[j])
            {
                // cnt1++;
                continue;
            }   
            else if (a[i]<b[j])
                break;
            
            if (a[i]==b[j] && a[i]!=ans.back())
            {
                ans.push_back(a[i]);
                // cout<<a[i]<<" ";
                cnt++;
                break;
            }
        }
    }
    
    ans.erase(ans.begin());
    
    //Prints the elements present in the vector which contains the Intersection of the two arrays 
    for (int i = 0; i < ans.size(); i++)
        cout<<ans[i]<<" ";
    
    return 0;
}