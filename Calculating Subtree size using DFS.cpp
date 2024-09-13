#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
#define pb push_back
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
vector<ll>v[1000000];
int vis[100000],subsize[100000];

int DFS(int node)
{
   vis[node]=1;
   int cnt=1;
   for(auto child: v[node])
   {
       if(vis[child]==0)
       {
           cnt+=DFS(child);
       }
   }

       subsize[node]=cnt;
       return cnt;
}

int main()
{
    ll n,e;
    cin>>n>>e;
    while(e--)
    {
        ll x,y;
        cin>>x>>y;
        v[x].pb(y);
        v[y].pb(x);
    }
    DFS(1);
    for(int i=1; i<=n; ++i)
    {
        cout<<"The subtree of "<<i<<" node is: "<<subsize[i]<<nl;
    }
    return 0;
}
