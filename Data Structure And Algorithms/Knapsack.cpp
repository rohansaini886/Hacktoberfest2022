#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool cmp(pair<int,int> &a,pair<int,int> &b)
{
    double r1= (double)a.first/(double)a.second;
    double r2= (double)b.first/(double)b.second;
    return r1>r2;
}

void knap(int w, vector<pair<int,int>> &v, int n)
{
    double final=0.0;
    sort(v.begin(),v.end(),cmp);

    for(int i=0; i<n; i++)
    {
        if(v[i].second<=w)
        {
            w-=v[i].second;
            final+=v[i].first;
            // cout<<endl<<final;
        }
        else{
            final+=v[i].first*((double)w/(double)v[i].second);
        }
    }
    cout<<endl<<final;

}

int main()
{
    vector<pair<int,int>> v;
    int n;
    cin>>n;
    for(int i=0; i<n ;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    int w;
    cin>>w;
    knap(w,v,n);
    return 0;
}