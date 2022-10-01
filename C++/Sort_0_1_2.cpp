
//DUTCH NATIONAL FLAG ALGORITHM TO SORT 0's,1's,2's in linear time i.e O(n)
#include <bits/stdc++.h>
using namespace std;
class DUTCH_NATIONAL_FLAG {
public:
    void sortColors(vector<int>& a) {
        int n=a.size();
            int low=0,mid=0,high=n-1;
        while(mid<=high)
        {
            if(a[mid]==0){
                swap(a[low],a[mid]);
                low++,mid++;
            }
           else if(a[mid]==1){
             
                mid++;
            }
          else  if(a[mid]==2){
                swap(a[mid],a[high]);
                high--;
            }
        }
         
    }
};
int main()
{
    vector<int>a={1,0,1,2,1,0,1,2,1,2,1,2,0,1};
    DUTCH_NATIONAL_FLAG s;
    s.sortColors(a);
    cout<<"after sorting:"<<endl;
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<< " ";

    }
    cout<<endl;
    return 0;
}
