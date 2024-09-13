#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
vector<ll>v[1000000];
int mx=-(INT_MAX),nod;
int vis[100000],dis[100000];
void DFS(int node, int d)
{
    vis[node]=1;
    dis[node]=d;
    if(dis[node]>mx)
    {
        mx=dis[node];
        nod=node;
    }
    for(auto child: v[node])
    {
        if(vis[child]==0)
        {
            DFS(child,dis[node]+1);
        }
    }
}

int main()
{
    ll n,e;
    cin>>n>>e;
    while(e--)
    {
        ll x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    DFS(1,0);
    cout<<mx<< " "<< nod<<nl;
    mx=-1;
    for (ll i=1; i<=n; i++) vis[i]=0;
    DFS (nod,0);
    cout<<mx<<' '<<nod<<nl;
    cout<<mx<<nl;
    return 0;

}

