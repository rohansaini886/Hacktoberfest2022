#include<bits/stdc++.h>
#define maxii INT32_MAX
using namespace std;
void solve()
{
   long long n;
   cin>>n;
   string s;
   cin>>s;
   vector<long long>tarin;
   for(long long i=0;i<n;i++)
   {
       if(s[i]=='0')
           tarin.push_back(i+1);
   }
   if(tarin.size()==0)
       cout<<0<<endl;
   else if(tarin.size()==n)
       cout<<n<<endl;
   else
   {
       long long soluchan=0;
       vector<long long>res(n+1);
       fill(res.begin(),res.end(),0);
       for(long long i=0;i<tarin.size();i++)
       {
           long long ind=1;
           while(binary_search(tarin.begin(),tarin.end(),ind*tarin[i]))
           {
               if(res[ind*tarin[i]]==0)
               {
                   soluchan+=tarin[i];
               }
               res[ind*tarin[i]] = 1;
               ++ind;
           }
       }
       cout<<soluchan<<endl;
   }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
        solve();
}
