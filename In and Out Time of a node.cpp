#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
vector<ll>v[1000000];
int vis[100000],in[100000],out[100000];
ll xx=1;

void DFS(int node)
{
    vis[node]=1;
    in[node]=xx++;
    for(auto child: v[node])
    {
        if(vis[child]==0) DFS(child);
    }
    out[node]= xx++;
}

int main()
{
    ll n,e; cin>>n>>e;
    while(e--)
    {
        ll x,y; cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    DFS(1);
    for(ll i=1; i<=n; i++)
    {
      cout<<i<<" in time: "<<in[i]<<" Out time: "<<out[i]<<endl;
    }
}
