//Robot Cleaner

#include <iostream>
#include<algorithm>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m, rb, cb, rd, cd;
        cin>>n>>m>>rb>>cb>>rd>>cd;
        int ans = 10007;
        
        
        if(rb <= rd)
        {
            ans = min(ans, rd - rb);
        }
        else
        {
            ans = min(ans, 2*n - rb - rd);
        }
        
        if(cb <= cd)
        {
            ans = min(ans, cd - cb);
        }
        else
        {
            ans = min(ans, 2*m - cb - cd);
        }
        cout<<ans<<endl;;
    }
    return 0;
}